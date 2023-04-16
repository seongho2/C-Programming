#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
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
	double g = 9.80;      // g�� gravitational_acceleration(�߷� ���ӵ�).
	double time2 = 0;      // time2 �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð�
	double time1 = 0;
	double H = 0;          // H�� �ְ� ����.
	double ��y = 0;
	��y = H;
	printf("\n\n");
	printf("2-28 \n");
	printf("�ʼӵ�  m/s�� ���� ���� ���� ��ü�� �ִ�. \n\n");

	printf("(a) �� ��ü�� �ö� �� �ִ� �ְ����� H�� ���ΰ�? \n\n");

	printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");

		printf("(a) �� ��ü�� �ö� �� �ִ� �ְ����� H�� ���ΰ�? \n\n");

		printf("�ְ� ������ ���� ������ ���ϼ���. \n\n");
		printf("�ְ� ������ ���� ������ �ְ� ���� �ӵ��� ���� - �������� �ӵ��� ���� = 2 * ���ӵ� * �ְ� ���� - ���� ���� \n\n");
		printf("�ְ� ���̿����� �ӵ��� 0m/s �Դϴ�. \n\n");
		printf("v^2 - v0^2 = 2 * a * ��y \n\n");
		printf("�ְ� ���̿� ���� ������ ǥ���ϸ� �ְ� ���� = �������� �ӵ����� / 2 * ���ӵ� \n\n");
		printf("��y = v0^2 / 2 * a \n\n");
		H = pow(speed, 2) / (g * 2);
		printf("�ְ� ���� %0.1lf m = �������� �ӵ����� %.0lf m/s / (2 * ���ӵ� %.2lf) m/s^2\n\n", H, speed, g);

	}

	if (answer == SHOW)
	{

		printf("=========================   �� ��   =============================\n\n");

		printf("�ְ� ���̴�%0.1lf m\n\n", H);



		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (solution == SHOW)
	{

		printf("=========================   Ǯ ��   =============================\n\n");

		printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n\n");
		printf("���� �ִ� ���� ���޽ð� ������ ���ϼ���. \n\n");
		printf("�ִ� ���� ���޽ð� ������ : �ְ� ������ �ӵ� = �������� �ӵ� + (���ӵ� * �ְ� ���� ���� �ð�) \n\n");
		printf("v = v0 + a * t \n\n");
		printf("�ְ� ������ �ӵ��� 0m/s�̹Ƿ� ������ �ִ� ���� ���޽ð����� �����: \n\n");
		printf("�ְ� ���� ���� �ð� = �������� �ӵ� / ���ӵ� \n\n");
		printf("t = v0 / a \n\n");
		time1 = speed / g;
		printf("�ְ� ���� ���޽ð� %.0lf s= �������� �ӵ� %.0lf m/s / �߷� ���ӵ� %.2lf m/s^2\n\n", time1, speed, g);
		printf("��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� �ְ��� ���� �ð��� * 2 �� ���̹Ƿ�: \n\n");
		time2 = time1 * 2;
		printf("�ְ� ���� ���޽ð� %.0lf s * 2 = ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð� %.0lf s\n\n", time1, time2);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   �� ��   =============================\n\n");

		printf("�ְ� ���� ���޽ð� %.0lf s * 2 = ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð� %.0lf s\n\n", time1, time2);


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