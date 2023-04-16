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
/*
void Excersize_2_1(int solution, int answer)
{

	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;
	double x_displacement  = 0.0, y_displacement  = 0.0;
	double x_displacement1 = 0.0, y_displacement1 = 0.0;
	double x_displacement2 = 0.0, y_displacement2 = 0.0;
	double x_displacement3 = 0.0, y_displacement3 = 0.0;

	printf("\n\n");
	printf("2-1 \n");
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고   \n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("관련 공식은 Vector의 성분 분해입니다.\n");
		printf("먼저 각 이동 거리를 x,y축으로 성분 분해를 하세요.\n");

		//   2023.04.07 추가 //
		printf("북쪽을 Y축으로 동쪽을 X 축으로 좌표축을 정합니다.\n\n");
		printf("북쪽으로 %4.1lf km를 날아간 이동에 대한 X 변위, Y 변위는 다음과 같습니다.\n");

		x_displacement1 = north_distance1 * cos(DEG2RAD(90));
		y_displacement1 = north_distance1 * sin(DEG2RAD(90));

		printf("X 변위 :  %.2lf km, Y 변위 :  %.2lf km \n\n", x_displacement1, y_displacement1);

		printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아간 이동에 대한 X 변위, Y 변위는 다음과 같습니다.\n", south_distance);

		x_displacement2 = south_distance * cos(DEG2RAD(-90));
		y_displacement2 = south_distance * sin(DEG2RAD(-90));
		printf("X 변위 :  %.2lf km, Y 변위 :  %.2lf km \n\n", x_displacement2, y_displacement2);

		printf("다시 북쪽으로 %4.1lf km를 날아 착륙한 이동에 대한 X 변위, Y 변위는 다음과 같습니다.\n", north_distance2);

		x_displacement3 = north_distance2 * cos(DEG2RAD(90));
		y_displacement3 = north_distance2 * sin(DEG2RAD(90));

		printf("X 변위 :  %.2lf km, Y 변위 :  %.2lf km \n\n", x_displacement3, y_displacement3);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		x_displacement = x_displacement1 + x_displacement2 + x_displacement3;

		printf("X 변위 합은 다음과 같습니다. \n%.2lf km = %.2lf km +  %.2lf km  + %.2lf km\n\n", x_displacement, x_displacement1, x_displacement2, x_displacement3);

		y_displacement = y_displacement1 + y_displacement2 + y_displacement3;

		printf("Y 변위 합은 다음과 같습니다. \n%.2lf km = %.2lf km +  %.2lf km  + %.2lf km\n\n", y_displacement, y_displacement1, y_displacement2, y_displacement3);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	
	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");

	if (solution == SHOW)
	{

	}

	if (answer == SHOW)
	{


	}

}
*/

void Excersize_2_1(int solution, int answer)  // 한라대학교 미래모빌리티공학과 고지환  2023.04.14 완료
{

	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;
	double x_displacement = 0.0;
	double displacement = 0.0;

	printf("\n\n");
	printf("2-1 \n");
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고   \n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   =============================\n");
		printf("관련 공식은 북쪽으로 이동한 값은 더하고 남쪽으로 이동한 값은 빼는 것입니다. \n");

		x_displacement = north_distance1 + north_distance2;
		printf("대형기동헬기가 북쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n", x_displacement);

		printf("대형기동헬기가 남쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		displacement = x_displacement - south_distance;
		printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ? \n\n");
		printf("대형기동헬기가 기지로부터 마지막 도착지점은 다음과 같습니다. : %4.1lf km\n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("관련 공식은 총 움직인거리의 총합입니다. \n");
		x_displacement = north_distance1 + north_distance2;
		printf("대형기동헬기가 북쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n", x_displacement);

		printf("대형기동헬기가 남쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
		displacement = x_displacement + south_distance;
		printf("대형기동헬기가 총 움직인 거리의 합은 다음과 같습니다. : %4.1lf km \n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

/*
void Excersize_2_3(int solution, int answer)   // 한라대학교 미래모빌리티공학과 김종선  2023.04.14 미완료
{
	double distance = 408000.0; // 408km 를 m로 변환한 값
	double time1 = 10.0;
	double time = 9420;        // 2시간 37분을 초로 변환한 값
	double time_h = 12.0;
	double time_m = 37.0;
	double velocity = 0.0;

	printf("\n\n");
	printf("2-3 \n");
	printf("서울에서 부산까지의 KTX 노선의 거리는 약 %d km이다\n", distance);
	printf("오전 %d 시에 서울역을 출발한 KTX가 %d 시 %d 분 부산역에 도착하였다.\n\n", time1, time_h, time_m);

	printf("열차의 평균속력은 몇 m/s인가?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("먼저 평균 속력의 공식을 구하세요.\n\n");
		printf("평균 속력의 공식은 : V평균 = (Xf - Xi) / (Tf - Ti) 입니다.\n\n");

		printf("=================================================================\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		velocity = distance / time;

		printf("평균속력을 구하는 법은 다음과 같습니다.\n%.2lf m/s = %.2lf m / %.2lf s\n\n", velocity, distance, time);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
}
*/

void Excersize_2_3(int solution, int answer) // 한라대학교 미래모빌리티공학과 김종선  2023.04.15 완료
{
	double distance = 408.0;
	double distance_0 = 0.0;
	double time_0 = 10.0;
	double time_h = 12.0;
	double time_m = 37.0;
	double time_x = 157;
	double time_s = 60;
	double time_f = 9420;
	double velocity = 43.3;


	printf("\n\n");
	printf("2-3 \n");
	printf("서울에서 부산까지의 KTX 노선의 거리는 약 %.0lf km이다\n", distance);
	printf("오전 %.0lf 시에 서울역을 출발한 KTX가 %.0lf 시 %.0lf 분 부산역에 도착하였다.\n\n", time_0, time_h, time_m);

	printf("열차의 평균속력은 몇 m/s인가?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		// your code here
		printf("이 문제를 해결하기 위해서는 평균 속력을 구해야합니다. \n\n");
		printf("따라서 평균 속력의 공식은 : vavg = (vf - vi / tf - ti)입니다 \n\n");
		printf("나중거리 vf는 %.0lfkm이고, 처음거리는 %.0lfkm입니다. \n", distance, distance_0);
		printf("나중시간은 %.0lf h %.0lf m이고, 처음시간은 %.0lf h입니다.\n", time_h, time_m, time_0);
		printf("평균속력은 %.0lfkm - %.0lfkm / %.0lfh %.0lfm - %.0lfh이며\n", distance, distance_0, time_h, time_m, time_0);
		printf("km/h 를 m/s로 변환해보면\n");
		printf("km는 m에 1000을 곱하면 되고,\n'h'에 3600을 곱하여 's'를 구하고 'm'에 60을 곱하여 's'를 구힙니다\n");
		printf("따라서 %.0lfkm = %.0lfkm * 1000 = 408000m이고\n2h 37m = 2h * 3600 + 37m * 60 = %.0lfs입니다\n", distance, distance, time_f);

		
		printf("=================================================================\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");


		printf("km/h에서 m/s로 변환한 값을 거리를 시간으로 나누면 됩니다\n");
		printf("따라서 %.0lf x 1000 / %.0lf = %.1lf이므로\n답은 %.1lf 입니다\n", distance, time_f, velocity, velocity);



		printf("=================================================================\n");
		printf("\n\n\n");
	}

}


void Excersize_2_5(int solution, int answer)  // 한라대학교 미래모빌리티공학과 김종선  2023.04.14 미완료
{
	double distance1 = 200;
	double velocity1 = 90;
	double distance2 = 200;
	double velocity2 = 50;
	double all_distance = 0;
	double all_time = 0;
	double time1 = 0;
	time1 = distance1 / velocity1;
	double time2 = 0;
	time2 = distance2 / velocity2;
	double time3 = 1;
	double displacement = 0;
	double average_velocity = 0;
	double average_speed = 0;


	printf("\n\n");
	printf("2-5 \n");
	printf("어떤 사람이 고속도로를 처음 %6.2lf km는 %6.2lf km/h의 속력으로 달리고, \n", distance1, velocity1);
	printf("1시간 동안 점심식사를 한 후에 다시 %6.2lf km를 %6.2lf km/h로 달려서 되돌아왔다. \n\n", distance2, velocity2);
	printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");		
		printf("관련 공식은  거리(Δx) = 속력(v) x 시간(t) 입니다.\n\n");

		printf("%6.2lf km를 %6.2lf km/h로 갈 때 걸린 시간은 %6.2lfkm(갈 때의 이동거리) / %6.2lfkm/h(갈 때의 속력) = %6.2lfh(걸린 시간)이다. \n", distance1, velocity1, distance1, velocity1, time1);
		printf("%6.2lf km를 %6.2lf km/h로 올 때 걸린 시간은 %6.2lfkm(올 때의 이동거리) / %6.2lfkm/h(올 때의 속력) = %6.2lfh(걸린 시간)이다. \n", distance2, velocity2, distance2, velocity2, time2);
		printf("점심시간 식사를 하는데 걸리는 시간은 %6.2lfh이다.\n\n", time3);

		all_time = time1 + time2 + time3;
		printf("총 걸린시간은 %6.2lfh(갈 때의 시간) + %6.2lfh(올 때의 시간) + %6.2lfh(식사 한 시간) = %6.2lfh이다. \n\n", time1, time2, time3, all_time);

		all_distance = distance1 + distance2;
		printf("총 이동한 거리는 %6.2lfkm(갈 때의 거리) + %6.2lfkm(올 때의 거리) = %6.2lfkm이다. \n\n\n", distance1, distance2, all_distance);



	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가? \n\n");

		printf("관련 공식은 평균 속력(average_velocity) = 총 이동 거리(all_distance) / 총 걸린 시간(all_time)이다.  vavg = Δx/Δt\n\n");

		all_distance = distance1 + distance2;
		printf("총 이동 거리: %6.2lfkm \n\n", all_distance);

		all_time = time1 + time2 + time3;
		printf("총 걸린 시간: %6.2lfh \n\n", all_time);

		average_velocity = (distance1 + distance2) / (time1 + time2 + time3);
		printf("평균 속력은 %6.2lfkm(총 이동 거리) / %6.2lfh(총 걸린 시간) = %6.2lfkm/h(평균 속력) \n", all_distance, all_time, average_velocity);
		printf("이 사람의 여행과정에서 평균 속력: %6.2lfkm/h \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("관련 공식은 변위 = 시작점에서 끝점까지의 위치변화입니다.\n");
		printf("관련 공식은 평균 속도(average_speed) = 변위(displacement) / 총 걸린 시간(all_time)입니다.\n\n");

		displacement = distance1 - distance2;
		printf("변위는 %6.2lfkm(갈 때의 거리) - %6.2lfkm (올 때의 거리) = %6.2lfkm(변위)이다.\n\n", distance1, distance2, displacement);

		all_time = time1 + time2 + time3;
		printf("이 사람의 여행과정에서 총 걸린시간은 %6.2lfh(갈 때의 시간)+ %6.2lfh(올 때의 시간) + %6.2lfh(식사 한 시간) = %6.2lfh이다. \n\n\n", time1, time2, time3, all_time);

	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n");
		printf("이 사람의 여행과정에서 평균 속도는 변위 / 총 걸린 시간이다.\n");

		displacement = distance1 - distance2;
		printf("변위: %6.2lfkm\n\n", displacement);

		all_time = time1 + time2 + 1;
		printf("총 걸린 시간: %6.2lfh\n\n", all_time);

		average_speed = displacement / (time1 + time2 + 1);
		printf("평균 속도는 %6.2lfkm(변위) / %6.2lfh(총 걸린 시간) = %6.2lfkm/h(평균 속도) \n", displacement, all_time, average_speed);
		printf("이 사람의 여행과정에서 평균 속도: %6.2lf km/h \n", average_speed);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}

void Excersize_2_11(int solution, int answer)  // 한라대학교 미래모빌리티공학과 원유빈  2023.04.15 완료
{
	double velocity = 90;
	double velocity_m_s = 0;
	double distance = 50;
	double acceleration = -6.25;
	double velocity_i = 90;
	double velocity_f = 0;
	double x_displacement = 50;

	printf("\n\n");
	printf("2-11 \n");
	printf("자동차 판매원이 어떤 스포츠카의 장점을 설명하였다.\n");
	printf("이 스포츠카는 %6.2lf km/h의 속도로 달리다가 브레이크를 밟은 후 %6.2lf m 이내에서 정지할 수 있는 성능을 갖고 있다고 한다.\n\n", velocity, distance);
	printf("(a) 이 경우 자동차의 가속도는 몇 m/s^2인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");

		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 이다.\n");
		printf("v는 나중 속도, v0는 처음 속도, a는 가속도, Δx는 위치의 변화량이다.\n\n");

		velocity_m_s = velocity * 1000 / 3600;

		printf("문제의 해답인 가속도를 구하기 위해서는 km/h 를 m/s (으)로 단위를 맞춰줘야 한다.\n");
		printf("1 km = 1000 m로 *1000 을(를) 해주고 h = 3600 s 이므로 /3600 s 을(를) 해준다.\n");
		printf("그러므로 %6.2lf km/h = %6.2lf * 1000 / 3600 m/s = %6.2lf m/s 이다.\n\n", velocity, velocity, velocity_m_s);

		printf("이후에 v, v0,Δx를 구하고 이를 활용하여 a를 구해주면 된다.\n");
		printf("v는 나중 속도로 브레이크를 밟은 후 정지했을 때 속도이므로 v = %6.2lf m/s 이다.\n", velocity_f);
		printf("v0는 처음 속도로 %6.2lf km/h 달리던 자동차의 속도로 v = %6.2lf m/s 이다.\n", velocity, velocity_i);
		printf("Δx는 위치의 변화량으로 %6.2lf m 을(를) 움직였으므로 Δx = %6.2lf m 이다.\n", distance, x_displacement);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("관련 공식 v^2 - v0^2 = 2 * a * Δx에 대입하면\n");
		printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m 이다.\n", velocity_f, velocity_m_s, x_displacement);
		printf("따라서 a에 대해 정리를 하면 a = %6.2lf m/s^2 이다\n", acceleration);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

void Excersize_2_15(int solution, int answer)  // 한라대학교 미래모빌리티공학과 이재혁  2023.04.15 미완료
{
	double velocity = 120.0;
	double velocity0 = 0;
	double distance = 240.0;
	double accel = 0;
	double velocity_1 = 0;
	double velocity_m = 0;
	double m = 1000.0;
	double s = 3600.0;
	double num = 2;
	double a = 0;
	double a_1 = 0;
	double t = 0;


	printf("\n\n");
	printf("2-15 \n");
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %5.2lf km/h이다.\n\n", velocity);  // %5.2lf로 아래도 통일할것
	printf("(a) 이 비행기가 활주로를 %lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("문제 (a)에서 구하여야 하는것은 가속도 입니다.\n\n");

		printf("사용될 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n\n");  //밑의 공식도 이렇게 바꾸세요

		printf(" 먼저 속도의 단위를 km/h 를 m/s 로 바꿔야 합니다.\n\n");

		printf(" km/h 를 m/s 로 바꾸려면 (veloity * 1000) / 3600 을 해 줘야 합니다.\n\n");

		printf(" 1000 을 곱하는 이유는 1km 가 1000m 이라서 이고,\n\n");

		printf(" 3600 을 나눠주는 이유는 1h 가 3600s 이기 때문입니다.\n\n");

		velocity_m = pow(velocity * m, 2) / pow(s, 2);

		printf(" m/s의 단위로 바꾼 속도의값은 %lf 입니다.\n\n", velocity_m);

		printf(" velocity^2은 나중속도 이므로 (120 km/h)^2 이고,\n\n");   // 120은 나중에 자동을 바뀔 값이므로 변수로 바꿀것

		printf(" velocity0^2은 처음속도 이므로 (0)^2 입니다.\n\n");

		velocity_1 = velocity_m - pow(velocity0, 2);

		printf(" velocity^2 - velocity0^2의 값은 %lf입니다.\n\n", velocity_1);

		a_1 = num * distance;

		printf(" 다음 오른쪽 2 * a * distance은 %lf 입니다.\n\n ", a_1);  // 다음오른쪽은 뭐지?

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf(" velocity^2 - velocity0^2 = 2 * a * distance를 계산 하면\n\n");  // 공식 바꾸고

		a = velocity_1 / a_1;

		printf(" (a) 의 답 %.2lf가 나옵니다.\n\n", a);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf(" (b)에서 구하여야 하는것은 시간 입니다.\n\n ");

		printf("(b)에서 필요한 공식은 velocity = velocity0 + (a * t) 입니다.\n\n");

		printf(" 이 식을 변형하면 t = (velocity - velocity0) / a 가 됩니다.\n\n");

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		t = ((velocity * m) / s) / a;

		printf(" 위의 식을 계산하면 (b)의 답 %.1lf s 가 나옵니다.\n\n", t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}


void Excersize_2_19(int solution, int answer) // 한라대학교 미래모빌리티공학과 최준혁  2023.04.16 완료
{
	double velocity = 120;
	double police_velocity = 0;
	double acceleration = 10;
	double converted_acceleration = 2.78;
	double distance = velocity / 3.6;
	double a, b, c = 0, d, e = 0.0;

	a = 0.5 * converted_acceleration;
	b = -1 * (velocity / 3.6);
	d = b * b - 4.0 * a * c;
	e = sqrt(d);

	printf("\n\n");
	printf("2-19 \n");
	printf("%.lf km/h의 속력으로 달리는 과속 운전자가 정지해 있는 경찰관을 지나쳤다.\n", velocity);
	printf("이 경찰관은 즉시 일정한 가속도 %.lf km/h/s로(혼합된 단위를 유의하라) 쫓아가기 시작하였다.\n\n", acceleration);
	printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("(a) 문제를 풀기 위해서는 혼합된 단위의 가속도를 정리해야 합니다. \n");
		printf("km/h/s를 m/s로 변환합니다.\n\n");

		printf("a = %.lf km/h/s = %.lf km/h/s * 1000m/1km * 1h/3600s * 1/s = %.2lf m/s^2\n\n", acceleration, acceleration, converted_acceleration);

		printf("과속 운전자가 t초 동안 달린 거리는 다음과 같습니다. (x1):\n");
		printf("x1 = v0t + 1/2 * a * t^2 = %.1lf m\n\n ", velocity / 3.6);

		printf("경찰차가 t초 동안 달린 거리는 다음과 같습니다. (x2):\n");
		printf("x2 = x0 + v0t + 1/2 * a * t^2 = 1/2 * %.1lf * t^2 m\n\n", velocity / 3.6);

		printf("과속 운전자가 붙잡히는 순간은 두 자동차의 거리가 같을 때입니다.\n");
		printf("%.1lf m/s = 1/2 * %.2lf m/s^2 * t^2\n\n", velocity / 3.6, converted_acceleration, acceleration / 3.6);

		printf("두 식의 이차방정식 : t^2 + %.2lft - %.1lf = 0\n", converted_acceleration, velocity / 3.6);
		printf("이차방정식의 해를 구하면 x1 = %.lf s, x2 = %.lf s입니다.\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
		printf("이때 처음 달리기 시작한 시간인 0 s는 답이 될 수 없습니다.\n\n ");
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
			printf("(a) 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 t = %.lf s 입니다.\n\n", (-b + e) / (2.0 * a));
			distance = distance * round((-b + e) / (2.0 * a));
		}
		else {
			printf("(a) 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 t = %.lf s 입니다.\n\n", (-b - e) / (2.0 * a));
			distance = distance * round((-b - e) / (2.0 * a));
		}
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("속도를 구하기 위해서는 v^2 - v0^2 = 2as 공식을 사용해야 합니다.\n");
		printf("이때 v0^2는 처음속도로, 차가 정지해 있다가 출발했기 때문에 0 입니다.\n");
		printf("v^2 = 2 * %.2lf m/s * %.lf m\n", converted_acceleration, distance);
		police_velocity = sqrt(2 * converted_acceleration * distance);
		printf("이때 v^2 이므로 v = sqrt(%.lf m/s) = %.lf m/s\n", 2 * converted_acceleration * distance, police_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 경찰차의 속도는 다음과 같습니다.\n");
		printf("v = %.1lf m/s = %.lf km/h\n\n", police_velocity, police_velocity * 3.6);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}


void Excersize_2_28(int solution, int answer)  // 한라대학교 미래모빌리티공학과 안성호 2023.04.16 미완료  2차방정식 부분 해결
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

		printf("최고 높이의 대한 공식을 구하세요. \n\n");
		printf("최고 높이의 대한 공식은 최고 높이 속도의 제곱 - 던졌을때 속도의 제곱 = 2 * 가속도 * 최고 높이 - 시작 높이 \n");
		printf("v^2 - v0^2 = 2 * a * Δy 입니다.\n\n");
		printf("최고 높이에서의 속도는 0m/s 이므로. \n\n");		
		printf("최고 높이에 관한 식으로 표현하면 최고 높이 = 던졌을때 속도제곱 / 2 * 가속도 \n");
		printf("Δy = v0^2 / 2 * a \n\n");
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

		printf("=========================   풀 이   =============================\n\n");

		printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n\n");
		printf("먼저 최대 높이 도달시간 공식을 구하세요. \n\n");
		printf("최대 높이 도달시간 공식은 : 최고 높이의 속도 = 던졌을때 속도 + (가속도 * 최고 높이 도달 시간) \n");
		printf("v = v0 + a * t \n\n");
		printf("최고 높이의 속도은 0m/s이므로 공식을 최대 높이 도달시간으로 만들면: \n");
		printf("최고 높이 도달 시간 = 던졌을때 속도 / 가속도 \n\n");
		printf("t = v0 / a \n\n");
		time1 = speed / g;
		printf("최고 높이 도달시간 %.0lf s= 던졌을때 속도 %.0lf m/s / 중력 가속도 %.2lf m/s^2\n\n", time1, speed, g);
		printf("물체가 다시 지면에서 떨어지는 데 걸리는 시간은 최고점 도달 시간에 * 2 한 값이므로: \n\n");
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


	//Excersize_2_1(1,1);  // 완료
	//Excersize_2_3(1,1);  // 완료
	//Excersize_2_5(1,1);  // 완료
	//Excersize_2_11(1,1);  // 완료
	//Excersize_2_13(1,1);

	//Excersize_2_15(1, 1);
	//Excersize_2_19(1, 1); // 완료

	//Excersize_2_2(1, 0);
	//Excersize_2_12(1, 0);
	//Excersize_2_22(1, 0);
	  Excersize_2_28(1, 1);




}

