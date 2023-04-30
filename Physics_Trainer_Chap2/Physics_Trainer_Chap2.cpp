#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_28(int solution, int answer)
{
	double speed = 49;	   // speed는 초기속도 v0.
	double g = 9.80;       // g는 gravitational_acceleration(중력 가속도).
	double time = 0;       // time은 총 걸린시간.
	double time1 = 0;	   // time1은 최고 높이 도달 시간
	double H = 0;          // H는 최고 높이.
	double Δy = 0;		   // Δy 높이변화량.
	
	printf("\n\n");
	printf("2-28 \n");
	printf("초속도 49m/s로 연직 위로 던진 물체가 있다. \n\n");

	printf("(a) 이 물체가 올라갈 수 있는 최고 높이 H는 얼마인가? \n\n");

	printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");

		printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n\n");

		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy \n\n");
		printf("v:나중속도, v0:초기속도, a:가속도, Δy:높이변화량.\n");
		printf("v = 0m/s 입니다. \n");
		printf("왜냐하면 최고 높이에서 물체가 멈추기 때문입니다.\n\n");
		printf("Δy = v0^2 / (2 * a) \n");
		printf("Δy = 49m/s / (2 * 9.8m/s^2) \n\n");
		printf("문제의 해답인 H를 구하기 위해서는 Δy를 H로 변환.\n");
		printf("Δy = y - y0 = H - 0 = H 입니다. \n\n");
		Δy = H;
		printf("H = 49m/s / (2 * 9.8m/s^2) \n");
		H = pow(speed, 2) / (g * 2);		//pow (a,b) = a^b
		printf("%0.1lfm = %.0lfm/s / (2 * %.2lf)m/s^2\n\n", H, speed, g);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		printf("최고 높이 H는 %0.1lf m\n\n", H);
	}
	if (solution == SHOW)
	{

		printf("=========================   풀 이   =============================\n\n");

		printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n\n");

		printf("관련 공식은 v = v0 + (a * t) \n\n");
		printf("v:나중속도, v0:초기속도, a:가속도, t:시간.\n");
		printf("t = v0 / a\n");
		printf("t = 49m/s / 9.80m/s^2\n");
		time1 = speed / g;
		printf("%.0lfs = %.0lfm/s / %.2lfm/s^2\n\n", time1, speed, g);

		
		printf("문제의 해답인 시간(time)을 구하기 위해서는 time 을 time1 * 2로 변환.\n");
		printf("t = 2 * t1\n");
		time = 2 * time1;
		printf("%.0lfs = 2 * %.0lfs\n\n", time, time1);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");

		printf("물체가 다시 지면에 떨어지는데 걸리는 시간은 %.0lfs\n\n", time);


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