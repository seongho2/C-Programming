#include <stdio.h>
#include <stdlib.h>
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

		printf("위에 구한 최고 높이 도달시간을 이용해 최대 높이 공식을 구하세요. \n\n");
		printf("최대 높이 공식은 : 최고 높이 속도의 제곱 - 던졌을때 속도의 제곱 = 2 * 가속도 * Δy \n\n");
		printf("최고 높이 = 던졌을때 속도제곱 / 2 * 가속도 \n\n");
		H = pow(speed, 2) / (g * 2);
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

		printf("=========================   풀 이   =============================\n");

		printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n");
		printf("먼저 최대 높이 도달시간 공식을 구하세요. \n\n");
		printf("최대 높이 도달시간 공식은 : 최고 높이의 속도 = 던졌을때 속도 + (가속도 * 최고 높이 도달 시간) \n\n");
		printf("최고 높이의 속도은 0이므로 공식을 최대 높이 도달시간으로 만들면: \n\n");
		printf("최고 높이 도달 시간 = 던졌을때 속도 / 가속도 \n\n");
		time1 = speed / g;
		printf("최고 높이 도달시간 %.0lf s= 던졌을때 속도 %.0lf m/s / 중력 가속도 %.2lf m/s^2\n", time1, speed, g);
		printf("물체가 다시 지면에서 떨어지는 데 걸리는 시간은 최고점 도달 시간에 * 2 한 값이므로: \n");
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