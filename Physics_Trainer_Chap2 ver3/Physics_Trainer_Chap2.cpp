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

/*void Excersize_2_1(int solution, int answer)
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
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�   \n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� ������ Vector�� ���� �����Դϴ�.\n");
		printf("���� �� �̵� �Ÿ��� x,y������ ���� ���ظ� �ϼ���.\n");

		//   2023.04.07 �߰� //
		printf("������ Y������ ������ X ������ ��ǥ���� ���մϴ�.\n\n");
		printf("�������� %4.1lf km�� ���ư� �̵��� ���� X ����, Y ������ ������ �����ϴ�.\n");

		x_displacement1 = north_distance1 * cos(DEG2RAD(90));
		y_displacement1 = north_distance1 * sin(DEG2RAD(90));

		printf("X ���� :  %.2lf km, Y ���� :  %.2lf km \n\n", x_displacement1, y_displacement1);

		printf("���� �������� �������� %4.1lf km�� ���ư� �̵��� ���� X ����, Y ������ ������ �����ϴ�.\n", south_distance);

		x_displacement2 = south_distance * cos(DEG2RAD(-90));
		y_displacement2 = south_distance * sin(DEG2RAD(-90));
		printf("X ���� :  %.2lf km, Y ���� :  %.2lf km \n\n", x_displacement2, y_displacement2);

		printf("�ٽ� �������� %4.1lf km�� ���� ������ �̵��� ���� X ����, Y ������ ������ �����ϴ�.\n", north_distance2);

		x_displacement3 = north_distance2 * cos(DEG2RAD(90));
		y_displacement3 = north_distance2 * sin(DEG2RAD(90));

		printf("X ���� :  %.2lf km, Y ���� :  %.2lf km \n\n", x_displacement3, y_displacement3);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		x_displacement = x_displacement1 + x_displacement2 + x_displacement3;

		printf("X ���� ���� ������ �����ϴ�. \n%.2lf km = %.2lf km +  %.2lf km  + %.2lf km\n\n", x_displacement, x_displacement1, x_displacement2, x_displacement3);

		y_displacement = y_displacement1 + y_displacement2 + y_displacement3;

		printf("Y ���� ���� ������ �����ϴ�. \n%.2lf km = %.2lf km +  %.2lf km  + %.2lf km\n\n", y_displacement, y_displacement1, y_displacement2, y_displacement3);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	
	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");

	if (solution == SHOW)
	{

	}

	if (answer == SHOW)
	{


	}

}


void Excersize_2_2(int solution, int answer)
{
	int h = 2;
	int m = 12;
	int s = 23;

	double distance1 = 42.195;
	double distance2 = 100.0;

	printf("\n\n");
	printf("2-2 \n");
	printf("Ȳ���� ������ %4.1lf m�� %d�ð� %d�� %d�ʿ� �پ� ����Ͽ���.\n\n", distance1, h, m, s);
	printf("Ȳ���� ������ %4.1lf m�� ��� �� �ʿ� �޸� ���ΰ�?  \n", distance2);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here


		printf("=================================================================\n");
	}
}


void Excersize_2_12(int solution, int answer)
{
	int sec = 6;
	int V = 25;
	int V0 = 10;

	double acceleration = 2.5;
	double distance = 105;

	printf("\n\n");
	printf("2-12 \n");
	printf("� �ڵ����� %d s ���ȿ� %d m/s ���� %d m/s�� ���ӵȴ�.\n\n", sec, V, V0);
	printf("(a)�� �ڵ����� ���ӵ��� ���ΰ�?  \n\n", acceleration);
	

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
	}

	printf("(b)�� �ڵ����� �׵��� �޸� �Ÿ��� ���ΰ�?  \n\n", distance);
}

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("� ���̿��� %d m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", V);
	printf("(a) ���� ���� �� %d s ���� �ӵ��� ���϶�.\n\n", sec);
	

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
			
		printf("=================================================================\n");
	}

	printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
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


	Excersize_2_1(1,1);
	//Excersize_2_2(1, 0);
	//Excersize_2_12(1, 0);
	//Excersize_2_22(1, 0);



}



void Excersize_2_1(int solution, int answer)
{
	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�\n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);

	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ�?\n\n");
	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ�?\n\n");
}

void Excersize_2_2(int solution, int answer)
{
	int h = 2;
	int m = 12;
	int s = 23;

	double distance1 = 42.195;
	double distance2 = 100.0;

	printf("\n\n");
	printf("2-2 \n");
	printf("Ȳ���� ������ %4.1lf m�� %d�ð� %d�� %d�ʿ� �پ� ����Ͽ���.\n\n", distance1, h, m, s);
	printf("Ȳ���� ������ %4.1lf m�� ��� �� �ʿ� �޸� ���ΰ�?  \n", distance2);
}

void Excersize_2_3(int solution, int answer)
{
	int distance = 408;
	int T0 = 10;
	int hour = 12;
	int min = 37;

	printf("\n\n");
	printf("2-3 \n");
	printf("���￡�� �λ������ KTX �뼱�� �Ÿ��� �� %d km�̴�\n", distance);
	printf("���� %d �ÿ� ���￪�� ����� KTX�� %d �� %d �� �λ꿪�� �����Ͽ���.\n\n", T0, hour, min);

	printf("������ ��ռӷ��� �� m/s�ΰ�?\n");
}

void Excersize_2_4(int solution, int answer)
{
	double a_average_velocity = 10;
	double b_Instantaneous_speed = 15;

	printf("\n\n");
	printf("2-4 \n");
	printf("����� ���� �����ϰ� �ִ� ��ü�� ���� �������� ������� �� ��,\n");
	printf("��ü�� �̵��Ÿ��� �ð��� ������ �׸� P2-4�� ����.\n\n");
	printf("(a) ����Ͽ� %d s ���� ��ü�� ��ռӷ��� �� m/s�ΰ�?\n\n", a_average_velocity);

	printf("(b) ��� �� %d s ���� �����ӷ��� �� m/s�ΰ�?\n\n", b_Instantaneous_speed);
}

void Excersize_2_5(int solution, int answer)
{
	int h = 1;

	int distance1 = 200;
	int velocity1 = 90;
	int distance2 = 200;
	int velocity2 = 50;

	printf("\n\n");
	printf("2-5 \n");
	printf("� ����� ��ӵ��θ� ó�� %d km�� %d km/h�� �ӷ����� �޸���, %d �ð����� ���ɽĻ縦 �� �Ŀ� �ٽ� %d km�� %d km/h�� �ӵ��� �޷��� �ǵ��ƿԴ�.\n\n", distance1, velocity1, h, distance2, velocity2);
	printf("�� ����� �����������(a) ��ռӷ°� (b) ��ռӵ��� ���϶�.\n\n");
}

void Excersize_2_6(int solution, int answer)
{
	int distance = 200;
	int sec = 25;

	printf("\n\n");
	printf("2-6 \n");
	printf("�޸��� ������ %d m Ʈ�� �� ������  %d s�� ����.\n\n", distance, sec);
	printf("������ (a) ��ռӷ°� (b) ��ռӵ��� ���϶�.\n\n");
	printf("(a) ��ռӷ�\n\n");
	printf("(b) ��ռӵ�\n\n");
}

void Excersize_2_7(int solution, int answer)
{
	printf("\n\n");
	printf("2-7 \n");
	printf("�׸��� x���� ���� 1������� �ϴ� ��ü�� ������ �ð� ���� �׷��� �̴�. \n");
	printf("�� �׷����� ���� �� ��ü�� � ���¸� �ð��뺰�� �����϶�.\n");
}

void Excersize_2_8(int solution, int answer)
{
	printf("\n\n");
	printf("2-8 \n");
	printf("���ӵ��� ���� +1�̶�� �ǹ̴�? \n\n");

	printf("(1) �ӵ��� ��ȭ�� ����.  \n");
	printf("(2) �ӵ��� ���� Ŀ����.  \n");
	printf("(3) �ӵ��� ���� �۾�����.\n");
	printf("(4) �ӵ��� �����ϴ�. \n\n");
}

void Excersize_2_9(int solution, int answer)
{
	double zero_back1 = 7.10;
	double zero_back2 = 11.2;

	printf("\n\n");
	printf("2-9 \n");
	printf("���Ͽ��� ����� ���� �¿����� ���ι��� %4.1lf s��� �Ѵ�.\n\n", zero_back1);
	printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
	printf("(b) ��� �����ڵ����� ���ι��� %4.1lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
}

void Excersize_2_10(int solution, int answer)
{
	int accel = 1.7;
	int V = 90;
	int s = 110;


	printf("\n\n");
	printf("2-10 \n");
	printf("��ӵ��ο��� � �ڵ����� �� %d m/s^2�� ���ӵ��� �� �� �ִ�.\n\n", accel);
	printf("�� ������ %d km/h�� �ӵ�����\n", V);
	printf("%d km/h�� �����ϴµ� �ɸ��� �ð��� �󸶳� �ɱ�?\n\n", s);
}

void Excersize_2_11(int solution, int answer)
{
	int velocity = 90;
	int distance = 50;

	printf("\n\n");
	printf("2-11 \n");
	printf("�ڵ��� �Ǹſ��� � ������ī�� ������ �����Ͽ���.\n");
	printf("�� ������ī�� %d km/h�� �ӵ��� �޸��ٰ� �극��ũ�� ������ %d m �̳����� ������ �� �ִ� ������ ���� �ִٰ� �Ѵ�.\n\n", velocity, distance);
	printf("(a) �� ��� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
}

void Excersize_2_12(int solution, int answer)
{
	int sec = 6;
	int V = 25;
	int V0 = 10;

	double acceleration = 2.5;
	double distance = 105;

	printf("\n\n");
	printf("2-12 \n");
	printf("� �ڵ����� %d s ���ȿ� %d m/s ���� %d m/s�� ���ӵȴ�.\n\n", sec, V, V0);
	printf("(a) �� �ڵ����� ���ӵ��� ���ΰ�?  \n\n", acceleration);
	printf("(b) �� �ڵ����� �׵��� �޸� �Ÿ��� ���ΰ�?  \n", distance);
}

void Excersize_2_13(int solution, int answer)
{
	int sec1 = 7;
	int sec2 = 5;

	printf("\n\n");
	printf("2-13 \n");
	printf("�ڵ����� ���� ���θ� �޸� ���� v-t �׷����̴�. \n\n");
	printf("(a) �� �ڵ����� a-t �׷����� �׸���. \n\n");
	printf("(b) �ڵ����� ó�� %d s ���� �̵��� �Ÿ��� ���ΰ�?\n\n", sec1);
	printf("(c) �� �ڵ����� ó�� %d s ������ ��ռӵ� �� ��հ��ӵ��� ���� ���ΰ� ?\n\n", sec2);;
}

void Excersize_2_14(int solution, int answer)
{

	double speed = 30;
	double acceleration = 3.0;


	printf("\n\n");
	printf("2-14 \n");
	printf("�����Ⱑ �̷��ϱ� ���ؼ��� �ӷ��� %d m/s�� �����ؾ� �Ѵ�.\n", speed);
	printf("%3.0lf m/s^2���� �����ϰ� �����Ѵٸ�\n\n", acceleration);
	printf("�̷��ӵ��� �����ϱ� ���ؼ� ���� Ȱ�ְŸ��� �ʿ��Ѱ�?\n\n");


}

void Excersize_2_15(int solution, int answer)
{
	int velocity1 = 120;
	int distance1 = 240;

	printf("\n\n");
	printf("2-15 \n");
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %d km/h�̴�.\n\n", velocity1);
	printf("(a) �� ����Ⱑ Ȱ�ַθ� %d m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance1);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");
}

void Excersize_2_16(int solution, int answer)
{
	int distance1 = 10000;
	double min = 30.0;
	int min2 = 27;
	int distance2 = 1100;
	double acceleration = 0.20;

	printf("\n\n");
	printf("2-16 \n");
	printf("� ���� ������ %d m�� %.1lf min �̳��� �����Ϸ��� �Ѵ�.\n\n", distance1, min);
	printf("��Ȯ�� %d min ���� �Ŀ� �޷��� �� �Ÿ��� %d m ���Ҵ�.\n\n", min2, distance2);
	printf("�׷��� �� ���� ������ ���ϴ� �ð� ���� �����ϱ� ���ؼ��� %.2lf m/s^2 �� ���ӵ��� �� �� ���� �����ؾ� �ϴ°�?\n\n", acceleration);

}

void Excersize_2_17(int solution, int answer)
{
	double velocity1 = 6.0;
	double velocity2 = 4.0;
	int speed1 = 10;
	int speed2 = 0;

	printf("\n\n");
	printf("2-17 \n");
	printf("ó���� �������� %.lf m/s �� �ӵ��� ��ϴ� ��ü�� ������ ������   \n", velocity1);
	printf("�ӵ��� ���Ͽ� %d s �� �������� %.lf m/s �� ��Ͽ���.     \n\n", speed1, velocity2);

	printf("(a) %d ���� �ӵ��� ��ȭ���� ���ΰ�?  \n\n", speed1);
	printf("(b) ���ӵ��� ũ��� ���̸�, �׹����� ��� �����ΰ�?  \n\n");
	printf("(c) ����� �� �� �� �ĸ� �ӵ��� %d �� �Ǵ°�?  \n\n", speed2);
	printf("(d) �ӵ��� %d �� �� ������ �̵��� �Ÿ��� ���ΰ�?  \n\n", speed2);
	printf("(e) ����� �� %d s ���� ������ �̵��� �Ÿ��� ���� ���ΰ�?  \n\n", speed1);
}

void Excersize_2_18(int solution, int answer)
{
	int velocity = 40;
	double speed = 0.50;
	int time = 1;
	int time2 = 1;

	printf("\n\n");
	printf("2-18 \n");
	printf("%d km/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ ��������   \n", velocity);
	printf("������ ���ӵ� %.2lf m/s�������� ���ӵǾ���. \n\n", speed);

	printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n");

	printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n");

	printf("(c) �ڵ����� ó�� %d s ���� �̵��� �Ÿ��� �ټ� ���� %d s ���ȿ� �̵���  �Ÿ��� ���� ���ΰ�? \n\n", time, time2);

}

void Excersize_2_19(int solution, int answer)
{
	int velocity = 120;
	int acceleration = 10;

	printf("\n\n");
	printf("2-19 \n");
	printf("%d km/h�� �ӷ����� �޸��� ���� �����ڰ� ������ �ִ� �������� �����ƴ�.\n", velocity);
	printf("�� �������� ��� ������ ���ӵ� %d km/h/s��(ȥ�յ� ������ �����϶�) �Ѿư��� �����Ͽ���.\n\n", acceleration);
	printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");
	printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");
}

void Excersize_2_20(int solution, int answer)
{
	int Va = 24;
	int Vb = 20;
	int V0a = 5;
	int V0b = 5;

	printf("\n\n");
	printf("2-20 \n");
	printf("%d m/s�� �޸��� �ڵ��� A��\n", Va);
	printf("%d m/s�� �޸��� �ڵ��� B�� ���ÿ� �극��ũ�� ��� �����ϰ� ���ӽ��Ѽ� �ڵ��� A�� %d s���� �ڵ��� B�� %d s���� �����Ͽ��� \n\n", Vb, V0a, V0b);
	printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ϱ�?\n\n");
	printf("(b) �� �ڵ����� �ӵ��� �������� ���� �극��ũ�� ���� �� �� ���ϱ�?\n\n");
	printf("(c) �극��ũ�� ���� �� ������ ������ � �ڵ����� �󸶳� �� �ɸ��°�?\n\n");
	printf("(d) �ڵ��� A�� B�� ���� ������ ���ӽ�Ų�ٸ� ������ ������ �ɸ��� �ð��� �� ���α�?\n\n");
}

void Excersize_2_21(int solution, int answer)
{
	int height = 360;

	printf("\n\n");
	printf("2-21 \n");
	printf("���� ���̰� %d m�� ���� ���󿡼� ������ ���� �������� ��ü�� ���Ͻ��״ٰ� ����.\n\n", height);
	printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");

	printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");
}

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("� ���̿��� %d m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", V);
	printf("(a) ���� ���� �� %d s ���� �ӵ��� ���϶�.\n\n", sec);
	printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n", distance);
}

void Excersize_2_23(int solution, int answer)
{
	double high = 2.2;
	double sec = 0.3;

	printf("2-23 \n");
	printf("�����ϴ� ���� ���̰� %.1lf m �� â���� �������� �� %.1lf s �ɸ���.\n\n", high, sec);
	printf("���� â���� ����⿡�� �󸶳� ���� ������ �������°�?\n");
}


void Excersize_2_24(int solution, int answer)
{
	double height = 39.2;
	double second_velocity = 5;

	printf("\n\n");
	printf("2-24 \n");
	printf("���̰� %39.2lf m�� 10�� ���󿡼�\n", height);
	printf("���� ����������� �ʼӵ� %d m/s�� ������.\n\n", second_velocity);
	printf("(a) ���� ���鿡 �������� �� �ɸ��� �ð��� ���ΰ�?\n\n");

	printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�?\n\n");
}

void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	int distance1 = 100;

	printf("\n\n");
	printf("2-25 \n");
	printf("�︮���Ͱ� %.2lf m/s�� �ӷ����� �����ϰ� �ö󰡰� �ִ�.\n", velocity1);
	printf("�������κ��� %d m ���̿��� â���� ���� ���ڸ� ����߷ȴ�. \n\n", distance1);
	printf("�� ���ڰ� ���鿡 �����ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");
}

void Excersize_2_26(int solution, int answer)
{
	double distance = 15.0;

	printf("\n\n");
	printf("2-26 \n");
	printf("�׸��� ���� ���� ���� ��ü�� ��� ������ ���̴�.\n\n");
	printf("(a) ���� %.1lf m���� �󸶳� ���� ��ϰڴ°�?\n\n", distance);
	printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�?\n\n");
	printf("(c) (b)���� ���� �� ���� ������ �����ΰ�?\n\n");
}

void Excersize_2_27(int solution, int answer)
{
	double high = 75.0;
	double velocity = 12.0;


	printf("\n\n");
	printf("2-27 \n");
	printf("�׸��� ���� ���̰� %.lf m �� ���� ������             \n", high);
	printf("%.lf m/s �� �ӷ����� ���� ���� ������� ���� �÷ȴ�. \n\n", velocity);

	printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�?  \n\n");
	printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ַ��� ���ΰ�?  \n\n");
	printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n\n");
}*/

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

	printf("(a) �� ��ü�� �ö� �� �ִ� �ְ���� H�� ���ΰ�? \n\n");

	printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");

		printf("(a) �� ��ü�� �ö� �� �ִ� �ְ���� H�� ���ΰ�? \n\n");

		printf("���� ���� �ְ� ���� ���޽ð��� �̿��� �ִ� ���� ������ ���ϼ���. \n\n");
		printf("�ִ� ���� ������ : �ְ� ���� �ӵ��� ���� - �������� �ӵ��� ���� = 2 * ���ӵ� * ��y \n\n");
		printf("�ְ� ���� = �������� �ӵ����� / 2 * ���ӵ� \n\n");
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

		printf("=========================   Ǯ ��   =============================\n");

		printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n");
		printf("���� �ִ� ���� ���޽ð� ������ ���ϼ���. \n\n");
		printf("�ִ� ���� ���޽ð� ������ : �ְ� ������ �ӵ� = �������� �ӵ� + (���ӵ� * �ְ� ���� ���� �ð�) \n\n");
		printf("�ְ� ������ �ӵ��� 0�̹Ƿ� ������ �ִ� ���� ���޽ð����� �����: \n\n");
		printf("�ְ� ���� ���� �ð� = �������� �ӵ� / ���ӵ� \n\n");
		time1 = speed / g;
		printf("�ְ� ���� ���޽ð� %.0lf s= �������� �ӵ� %.0lf m/s / �߷� ���ӵ� %.2lf m/s^2\n", time1, speed, g);
		printf("��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� �ְ��� ���� �ð��� * 2 �� ���̹Ƿ�: \n");
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

/*void Excersize_2_29(int solution, int answer)
{
	printf("\n\n");	
	printf("2-29 \n");
	printf("�׸��� ���� ���� ���� ��ü�� ��� ������ ���̴�.\n\n");
	printf("�� ��� ���� �߸� ������ ����?\n\n");
}


int main(void)
{
	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");

	Excersize_2_1(0, 0);
	Excersize_2_2(0, 0);
	Excersize_2_3(0, 0);
	Excersize_2_4(0, 0);
	Excersize_2_5(0, 0);
	Excersize_2_6(0, 0);
	Excersize_2_7(0, 0);
	Excersize_2_8(0, 0);
	Excersize_2_9(0, 0);
	Excersize_2_10(0, 0);
	Excersize_2_11(0, 0);
	Excersize_2_12(0, 0);
	Excersize_2_13(0, 0);
	Excersize_2_14(0, 0);
	Excersize_2_15(0, 0);
	Excersize_2_16(0, 0);
	Excersize_2_17(0, 0);
	Excersize_2_18(0, 0);
	Excersize_2_19(0, 0);
	Excersize_2_20(0, 0);
	Excersize_2_21(0, 0);
	Excersize_2_22(0, 0);
	Excersize_2_23(0, 0);
	Excersize_2_24(0, 0);
	Excersize_2_25(0, 0);
	Excersize_2_26(0, 0);
	Excersize_2_27(0, 0);
	Excersize_2_28(0, 0);
	Excersize_2_29(0, 0);
}

*/