#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_28(int solution, int answer)
{
	double speed = 49;	   // speed�� �ʱ�ӵ� v0.
	double g = 9.80;       // g�� gravitational_acceleration(�߷� ���ӵ�).
	double time = 0;       // time�� �� �ɸ��ð�.
	double time1 = 0;	   // time1�� �ְ� ���� ���� �ð�
	double y = 0;		   // ��y ���̺�ȭ��.

	printf("\n\n");
	printf("2-28 \n");
	printf("�ʼӵ� 49m/s�� ���� ���� ���� ��ü�� �ִ�. \n\n");

	printf("(a) �� ��ü�� �ö� �� �ִ� �ְ� ���� H�� ���ΰ�? \n\n");

	printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");

		printf("(a) �� ��ü�� �ö� �� �ִ� �ְ���� H�� ���ΰ�? \n\n");

		printf("���� ������ v^2 - v0^2 = 2 * a * ��y \n");
		printf("v:���߼ӵ�, v0:�ʱ�ӵ�, a:���ӵ�, ��y:���̺�ȭ��.\n\n");
		printf("�ְ� ���̿����� ���� ����ӵ��� 0�̹Ƿ� v = 0m/s �Դϴ�. \n\n");
		printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -9.80m/s^2 �Դϴ�. \n\n");
		
		printf("v^2 - v0^2 = 2 * a * y \n");
		printf("(0m/s)^2 - (49m/s^2)^2 = 2 * (-9.80m/s^2) * y\n");
		y = pow(speed, 2) / (g * 2);		//pow (a,b) = a^b
		printf("y = 49m/s / (2 * 9.8m/s^2) = %0.1lfm\n\n", y);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("�ְ� ���� H = %0.1lf m\n\n", y);
	}
	if (solution == SHOW)
	{

		printf("=========================   Ǯ ��   =============================\n\n");

		printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n\n");

		printf("���� ������ v = v0 + (a * t) \n");
		printf("v:���߼ӵ�, v0:�ʱ�ӵ�, a:���ӵ�, t:�ð�.\n\n");
		
		printf("v = v0 + (a * t) \n");
		printf("0m/s = 49m/s - 9.80m/s^2 * t1\n");
		time1 = speed / g;
		printf("t1 = 49m/s / 9.80m/s^2 = %.0lfs\n\n", time1);

		printf("������ �ش��� �ð�(time)�� ���ϱ� ���ؼ��� time �� time1 * 2�� ��ȯ.\n");
		time = 2 * time1;
		printf("t = 2 * t1 = 2 * %.0lfs = %.0lfs\n\n", time1, time);
	}

	if (answer == SHOW)
	{

		printf("=========================   �� ��   =============================\n\n");

		printf("��ü�� �ٽ� ���鿡 �������µ� �ɸ��� �ð� t = %.0lfs\n\n", time);


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