#include <stdio.h>
#include <stdlib.h>Reading
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_28(int solution, int answer)
{
	double speed = 49;
	double g = 9.80;      // g는 gravitational_acceleration(중력 가속도).
	double time2 = 0;      // time2 는 물체가 다시 지면에서 떨어지는 데 걸리는 시간
	double time1 = 0;
	double H = 0;          // H는 최고 높이.
	double Δy = 0;
	Δy = H;
	printf("\n\n");
	printf("2-28 \n");
	printf("초속도  m/s로 연직 위로 던진 물체가 있다. \n\n");

	printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n\n");

	printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");

		printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n\n");
		
		printf("이 문제를 풀려면 최대 높이 H를 알아야 합니다.\n\n");
		printf("그러므로 H를 알려면 최대 높이의 대한 공식을 알아야 합니다. \n\n");
		printf("최고 높이의 대한 공식은 최고 높이 속도의 제곱 - 던졌을때 속도의 제곱 = 2 * 가속도 * 최고 높이 - 시작 높이 \n\n");
		printf("최고 높이에서의 속도는 0m/s 입니다. \n\n");
		printf("최고 높이에서의 속도가 0m/s인 이유는 최고 높이에서 물체가 멈추기 때문입니다.\n\n");
		printf("v^2 - v0^2 = 2 * a * Δy \n\n");
		printf("최고 높이에 관한 식으로 표현하면 최고 높이 = 던졌을때 속도제곱 / 2 * 가속도 \n\n");
		printf("Δy = v0^2 / 2 * a \n\n");
		H = pow(speed, 2) / (g * 2);		//pow (a,b) = a^b
		printf("최고 높이 %0.1lf m = 던졌을때 속도제곱 %.0lf m/s / (2 * 가속도 %.2lf) m/s^2\n\n", H, speed, g);
	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");

		printf("최고 높이는%0.1lf m\n\n", H);



		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (solution == SHOW)
	{

		printf("=========================   풀 이   =============================\n\n");

		printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n\n");
		
		printf("물체가 다시 지면에 떨어지는데 걸리는 시간을 알려면, \n\n");
		printf("최대 높이 도달시간 공식을 알아야 합니다. \n\n");
		printf("최대 높이 도달시간 공식은 : 최고 높이의 속도 = 던졌을때 속도 + (가속도 * 최고 높이 도달 시간) \n\n");
		printf("v = v0 + a * t \n\n");
		printf("최고 높이의 속도은 0m/s이므로 공식을 최대 높이 도달시간으로 만들면: \n\n");
		printf("최고 높이 도달 시간 = 던졌을때 속도 / 가속도 \n\n");
		printf("t = v0 / a \n\n");
		time1 = speed / g;
		printf("최고 높이 도달시간 %.0lf s= 던졌을때 속도 %.0lf m/s / 중력 가속도 %.2lf m/s^2\n\n", time1, speed, g);
		printf("물체가 다시 지면에 떨어지는데 걸리는 시간은\n\n");
		printf("최대 높이까지에 시간에서 다시 지면으로 떨어지는 시간을 더해줘야 하기 때문에\n\n");
		printf("최대 높이 도달시간에 * 2 한 값으로 \n\n");
		time2 = time1 * 2;
		printf("최고 높이 도달시간 %.0lf s * 2 = 물체가 다시 지면에서 떨어지는 데 걸리는 시간 %.0lf s\n\n", time1, time2);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");

		printf("최고 높이 도달시간 %.0lf s * 2 = 물체가 다시 지면에서 떨어지는 데 걸리는 시간 %.0lf s\n\n", time1, time2);


		printf("=================================================================\n");
		printf("\n\n\n");
	}
}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_28(Show_Solution, Answer);
}