#define AOpin  A0     // Analog output - yellow
#define SIpin  22     // Start Integration - orange
#define CLKpin 23    
#define NPIXELS 128  // No. of pixels in array
#define ENA 8
#define IN1 9
#define IN2 10
#define IN3 11
#define IN4 12
#define ENB 13


double kp_vision = 0.1;
double kd_vision = 0.3;
double ki_vision = 0.0;
double error     = 0.0;
double error_old   = 0.0;
double Target    = NPIXELS/2;

byte Pixel[NPIXELS]; // Field for measured values <0-255>
byte LineSensor_threshold_Data[NPIXELS];

int LineSensor_Data[NPIXELS];           // line sensor data(original)
int LineSensor_Data_Adaption[NPIXELS];  // line sensor data(modified)
int MAX_LineSensor_Data[NPIXELS];       // Max value of sensor
int MIN_LineSensor_Data[NPIXELS];       // Min value of sensor
int flag_line_adapation;          // flag to check line sensor adpation

#define FASTADC 1
// defines for setting and clearing register bits
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))

void motor_control_right(int motor_speed_R) // 모터 A의 속도(speed)제어
  {
    if (motor_speed_R >= 0)
    {
      digitalWrite(IN1, LOW);         //모터의 방향 제어
      digitalWrite(IN2, HIGH);
      if(motor_speed_R>=255) motor_speed_R = 255;
      analogWrite(ENA, motor_speed_R); //모터의 속도 제어
    }
    else
    {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      if(motor_speed_R<=-255) motor_speed_R = -255;
      analogWrite(ENA, -motor_speed_R);
    }
  }


  void motor_control_left(int motor_speed_L) // 모터 A의 속도(speed)제어
  {
    if (motor_speed_L >= 0)
    {
      digitalWrite(IN3, LOW);         //모터의 방향 제어
      digitalWrite(IN4, HIGH);
      if(motor_speed_L>=255) motor_speed_L = 255;
      analogWrite(ENB, motor_speed_L); //모터의 속도 제어
    }
    else
    {
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      if(motor_speed_L<=-255) motor_speed_L = -255;
      analogWrite(ENB, -motor_speed_L);
    }
  }
  
void setup() {
  // put your setup code here, to run once:
  int i;
  for (i = 0; i < NPIXELS; i++)
  {
    LineSensor_Data[i] = 0;
    LineSensor_Data_Adaption[i] = 0;
    MAX_LineSensor_Data[i] = 1023; //0;
    MIN_LineSensor_Data[i] = 0; //1023;
  }
  pinMode(SIpin, OUTPUT);
  pinMode(CLKpin, OUTPUT);
  pinMode(AOpin, INPUT);

  digitalWrite(SIpin, LOW);   // IDLE state
  digitalWrite(CLKpin, LOW);  // IDLE state

  pinMode (ENA, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);

  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENB, OUTPUT);
  
#if FASTADC
  // set prescale to 16
  sbi(ADCSRA, ADPS2);
  cbi(ADCSRA, ADPS1);
  cbi(ADCSRA, ADPS0);
#endif

  flag_line_adapation = 0;
  Serial.begin(115200);
  Serial.println("TSL1401");
}

void threshold_line_image(int threshold_value)
{
   for (int i = 0; i < NPIXELS; i++)
   {
     if(Pixel[i]>=threshold_value)
     {

       LineSensor_threshold_Data[i]= 255;
     }
     else
     {
       LineSensor_threshold_Data[i]= 0;
     }
   }
}
void read_line_camera(void)
{
    int i;
    delay(1);              /* Integration time in miliseconds  */
   
    digitalWrite (CLKpin, LOW);
    digitalWrite (SIpin, HIGH);
    digitalWrite (CLKpin, HIGH);
    digitalWrite (SIpin, LOW);
    delayMicroseconds (1);

    for (i = 0; i < NPIXELS; i++)
    {
       Pixel[i] = analogRead(AOpin)/4 ; // 8-bit is enough
       digitalWrite (CLKpin, LOW);
       delayMicroseconds (1);
       digitalWrite (CLKpin, HIGH);
    }
    digitalWrite (CLKpin, LOW);    
}

double line_centroid(void)
{
  double centroid = 0.0;
  double mass_sum = 0;
  for(int i = 0; i< NPIXELS ; i++)
  {
     mass_sum += LineSensor_threshold_Data[i];
     centroid += LineSensor_threshold_Data[i] * i;
  }
  centroid =  centroid / mass_sum;

  return centroid;
}
double PID_control(double line_center)
{
  /*double kp_vision = 0.1;
  double kd_vision = 0.3;
  double ki_vision = 0.0;
  double error     = 0.0;
  double error_old   = 0.0;
  double Target    = NPIXELS/2;*/
  int pwm_value = 0;
  double error_d = 0;
  error   = Target - line_center;
  error_old = error - error_old;
  pwm_value = int(kp_vision * error + kd_vision * error_old);
  if(pwm_value >= 200) pwm_value = 200;
  if(pwm_value <= -200) pwm_value = -200;
  error_old = error;
  return pwm_value;
}
void vision_line_centrol(int base_speed, double l_c)
{
  int pwm_control_value = PID_control(l_c);
  motor_control_left(base_speed + pwm_control_value);           // - + 바꾸어야함! PID 값
  motor_control_right(base_speed - pwm_control_value); 
}
void loop() {
  // put your main code here, to run repeatedly:
 
    double c_x =0;
    read_line_camera();
    threshold_line_image(150);
    c_x = line_centroid();
    for (int i = 0; i < NPIXELS; i++)
    {
      Serial.println(LineSensor_threshold_Data[i]);      
    }
    Serial1.println(c_x);
   
}
