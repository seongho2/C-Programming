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
	double H = 0;          // H�� �ְ� ����.
	double ��y = 0;		   // ��y ���̺�ȭ��.
	
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

		printf("���� ������ v^2 - v0^2 = 2 * a * ��y \n\n");
		printf("v:���߼ӵ�, v0:�ʱ�ӵ�, a:���ӵ�, ��y:���̺�ȭ��.\n");
		printf("v = 0m/s �Դϴ�. \n");
		printf("�ֳ��ϸ� �ְ� ���̿��� ��ü�� ���߱� �����Դϴ�.\n\n");
		printf("��y = v0^2 / (2 * a) \n");
		printf("��y = 49m/s / (2 * 9.8m/s^2) \n\n");
		printf("������ �ش��� H�� ���ϱ� ���ؼ��� ��y�� H�� ��ȯ.\n");
		printf("��y = y - y0 = H - 0 = H �Դϴ�. \n\n");
		��y = H;
		printf("H = 49m/s / (2 * 9.8m/s^2) \n");
		H = pow(speed, 2) / (g * 2);		//pow (a,b) = a^b
		printf("%0.1lfm = %.0lfm/s / (2 * %.2lf)m/s^2\n\n", H, speed, g);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("�ְ� ���� H�� %0.1lf m\n\n", H);
	}
	if (solution == SHOW)
	{

		printf("=========================   Ǯ ��   =============================\n\n");

		printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n\n");

		printf("���� ������ v = v0 + (a * t) \n\n");
		printf("v:���߼ӵ�, v0:�ʱ�ӵ�, a:���ӵ�, t:�ð�.\n");
		printf("t = v0 / a\n");
		printf("t = 49m/s / 9.80m/s^2\n");
		time1 = speed / g;
		printf("%.0lfs = %.0lfm/s / %.2lfm/s^2\n\n", time1, speed, g);

		
		printf("������ �ش��� �ð�(time)�� ���ϱ� ���ؼ��� time �� time1 * 2�� ��ȯ.\n");
		printf("t = 2 * t1\n");
		time = 2 * time1;
		printf("%.0lfs = 2 * %.0lfs\n\n", time, time1);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   �� ��   =============================\n\n");

		printf("��ü�� �ٽ� ���鿡 �������µ� �ɸ��� �ð��� %.0lfs\n\n", time);


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