#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 
#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_MSC_1(int solution, int answer)
{
    srand(time(NULL));
    double Ax = 3.0 + ((rand() % 51) / 10.0) + 0.5;
    double Ay = rand() % 89 + 1;
    double Bx = 6.0 + ((rand() % 51) / 10.0) + 0.5;
    double By = -rand() % 89 + 1;
    double x1, y1, x2, y2, distance;

    x1 = Ax * cos(DEG2RAD(Ay));
    y1 = Ax * sin(DEG2RAD(Ay));
    x2 = Bx * cos(DEG2RAD(By));
    y2 = Bx * sin(DEG2RAD(By));

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A(%5.1lfm , %5.1lf°) -> (%5.1lf, %5.1lf)\n", Ax, Ay, x1, y1);
    printf("B(%5.1lfm , %5.1lf°) -> (%5.1lf, %5.1lf)\n\n", Bx, By, x2, y2);
    printf("D = √(x1 - x2)^2 - (y1 -y2)^2 \n");
    printf("  = √(%5.1lf-%5.1lf)^2 - (%5.1lf-%5.1lf)^2 \n", x1, x2, y1, y2);
    printf("  =%5.2lfm\n", distance);
}

int main(void) {
    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("========================= MSC Contest  ==========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    Excersize_MSC_1(1, 1);

    return 0;
}