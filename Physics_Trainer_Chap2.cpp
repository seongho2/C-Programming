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
*/

void Excersize_2_1(int solution, int answer)  // �Ѷ���б� �̷������Ƽ���а� ����ȯ  2023.04.14 �Ϸ�
{

	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;
	double x_displacement = 0.0;
	double displacement = 0.0;

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�   \n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   =============================\n");
		printf("���� ������ �������� �̵��� ���� ���ϰ� �������� �̵��� ���� ���� ���Դϴ�. \n");

		x_displacement = north_distance1 + north_distance2;
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", x_displacement);

		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		displacement = x_displacement - south_distance;
		printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ? \n\n");
		printf("�����⵿��Ⱑ �����κ��� ������ ���������� ������ �����ϴ�. : %4.1lf km\n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");
		printf("���� ������ �� �����ΰŸ��� �����Դϴ�. \n");
		x_displacement = north_distance1 + north_distance2;
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", x_displacement);

		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
		displacement = x_displacement + south_distance;
		printf("�����⵿��Ⱑ �� ������ �Ÿ��� ���� ������ �����ϴ�. : %4.1lf km \n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

/*
void Excersize_2_3(int solution, int answer)   // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.14 �̿Ϸ�
{
	double distance = 408000.0; // 408km �� m�� ��ȯ�� ��
	double time1 = 10.0;
	double time = 9420;        // 2�ð� 37���� �ʷ� ��ȯ�� ��
	double time_h = 12.0;
	double time_m = 37.0;
	double velocity = 0.0;

	printf("\n\n");
	printf("2-3 \n");
	printf("���￡�� �λ������ KTX �뼱�� �Ÿ��� �� %d km�̴�\n", distance);
	printf("���� %d �ÿ� ���￪�� ����� KTX�� %d �� %d �� �λ꿪�� �����Ͽ���.\n\n", time1, time_h, time_m);

	printf("������ ��ռӷ��� �� m/s�ΰ�?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� ��� �ӷ��� ������ ���ϼ���.\n\n");
		printf("��� �ӷ��� ������ : V��� = (Xf - Xi) / (Tf - Ti) �Դϴ�.\n\n");

		printf("=================================================================\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		velocity = distance / time;

		printf("��ռӷ��� ���ϴ� ���� ������ �����ϴ�.\n%.2lf m/s = %.2lf m / %.2lf s\n\n", velocity, distance, time);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
}
*/

void Excersize_2_3(int solution, int answer) // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.15 �Ϸ�
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
	printf("���￡�� �λ������ KTX �뼱�� �Ÿ��� �� %.0lf km�̴�\n", distance);
	printf("���� %.0lf �ÿ� ���￪�� ����� KTX�� %.0lf �� %.0lf �� �λ꿪�� �����Ͽ���.\n\n", time_0, time_h, time_m);

	printf("������ ��ռӷ��� �� m/s�ΰ�?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");
		// your code here
		printf("�� ������ �ذ��ϱ� ���ؼ��� ��� �ӷ��� ���ؾ��մϴ�. \n\n");
		printf("���� ��� �ӷ��� ������ : vavg = (vf - vi / tf - ti)�Դϴ� \n\n");
		printf("���߰Ÿ� vf�� %.0lfkm�̰�, ó���Ÿ��� %.0lfkm�Դϴ�. \n", distance, distance_0);
		printf("���߽ð��� %.0lf h %.0lf m�̰�, ó���ð��� %.0lf h�Դϴ�.\n", time_h, time_m, time_0);
		printf("��ռӷ��� %.0lfkm - %.0lfkm / %.0lfh %.0lfm - %.0lfh�̸�\n", distance, distance_0, time_h, time_m, time_0);
		printf("km/h �� m/s�� ��ȯ�غ���\n");
		printf("km�� m�� 1000�� ���ϸ� �ǰ�,\n'h'�� 3600�� ���Ͽ� 's'�� ���ϰ� 'm'�� 60�� ���Ͽ� 's'�� �����ϴ�\n");
		printf("���� %.0lfkm = %.0lfkm * 1000 = 408000m�̰�\n2h 37m = 2h * 3600 + 37m * 60 = %.0lfs�Դϴ�\n", distance, distance, time_f);

		
		printf("=================================================================\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");


		printf("km/h���� m/s�� ��ȯ�� ���� �Ÿ��� �ð����� ������ �˴ϴ�\n");
		printf("���� %.0lf x 1000 / %.0lf = %.1lf�̹Ƿ�\n���� %.1lf �Դϴ�\n", distance, time_f, velocity, velocity);



		printf("=================================================================\n");
		printf("\n\n\n");
	}

}


void Excersize_2_5(int solution, int answer)  // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.14 �̿Ϸ�
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
	printf("� ����� ��ӵ��θ� ó�� %6.2lf km�� %6.2lf km/h�� �ӷ����� �޸���, \n", distance1, velocity1);
	printf("1�ð� ���� ���ɽĻ縦 �� �Ŀ� �ٽ� %6.2lf km�� %6.2lf km/h�� �޷��� �ǵ��ƿԴ�. \n\n", distance2, velocity2);
	printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");		
		printf("���� ������  �Ÿ�(��x) = �ӷ�(v) x �ð�(t) �Դϴ�.\n\n");

		printf("%6.2lf km�� %6.2lf km/h�� �� �� �ɸ� �ð��� %6.2lfkm(�� ���� �̵��Ÿ�) / %6.2lfkm/h(�� ���� �ӷ�) = %6.2lfh(�ɸ� �ð�)�̴�. \n", distance1, velocity1, distance1, velocity1, time1);
		printf("%6.2lf km�� %6.2lf km/h�� �� �� �ɸ� �ð��� %6.2lfkm(�� ���� �̵��Ÿ�) / %6.2lfkm/h(�� ���� �ӷ�) = %6.2lfh(�ɸ� �ð�)�̴�. \n", distance2, velocity2, distance2, velocity2, time2);
		printf("���ɽð� �Ļ縦 �ϴµ� �ɸ��� �ð��� %6.2lfh�̴�.\n\n", time3);

		all_time = time1 + time2 + time3;
		printf("�� �ɸ��ð��� %6.2lfh(�� ���� �ð�) + %6.2lfh(�� ���� �ð�) + %6.2lfh(�Ļ� �� �ð�) = %6.2lfh�̴�. \n\n", time1, time2, time3, all_time);

		all_distance = distance1 + distance2;
		printf("�� �̵��� �Ÿ��� %6.2lfkm(�� ���� �Ÿ�) + %6.2lfkm(�� ���� �Ÿ�) = %6.2lfkm�̴�. \n\n\n", distance1, distance2, all_distance);



	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�? \n\n");

		printf("���� ������ ��� �ӷ�(average_velocity) = �� �̵� �Ÿ�(all_distance) / �� �ɸ� �ð�(all_time)�̴�.  vavg = ��x/��t\n\n");

		all_distance = distance1 + distance2;
		printf("�� �̵� �Ÿ�: %6.2lfkm \n\n", all_distance);

		all_time = time1 + time2 + time3;
		printf("�� �ɸ� �ð�: %6.2lfh \n\n", all_time);

		average_velocity = (distance1 + distance2) / (time1 + time2 + time3);
		printf("��� �ӷ��� %6.2lfkm(�� �̵� �Ÿ�) / %6.2lfh(�� �ɸ� �ð�) = %6.2lfkm/h(��� �ӷ�) \n", all_distance, all_time, average_velocity);
		printf("�� ����� ����������� ��� �ӷ�: %6.2lfkm/h \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");
		printf("���� ������ ���� = ���������� ���������� ��ġ��ȭ�Դϴ�.\n");
		printf("���� ������ ��� �ӵ�(average_speed) = ����(displacement) / �� �ɸ� �ð�(all_time)�Դϴ�.\n\n");

		displacement = distance1 - distance2;
		printf("������ %6.2lfkm(�� ���� �Ÿ�) - %6.2lfkm (�� ���� �Ÿ�) = %6.2lfkm(����)�̴�.\n\n", distance1, distance2, displacement);

		all_time = time1 + time2 + time3;
		printf("�� ����� ����������� �� �ɸ��ð��� %6.2lfh(�� ���� �ð�)+ %6.2lfh(�� ���� �ð�) + %6.2lfh(�Ļ� �� �ð�) = %6.2lfh�̴�. \n\n\n", time1, time2, time3, all_time);

	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n");
		printf("�� ����� ����������� ��� �ӵ��� ���� / �� �ɸ� �ð��̴�.\n");

		displacement = distance1 - distance2;
		printf("����: %6.2lfkm\n\n", displacement);

		all_time = time1 + time2 + 1;
		printf("�� �ɸ� �ð�: %6.2lfh\n\n", all_time);

		average_speed = displacement / (time1 + time2 + 1);
		printf("��� �ӵ��� %6.2lfkm(����) / %6.2lfh(�� �ɸ� �ð�) = %6.2lfkm/h(��� �ӵ�) \n", displacement, all_time, average_speed);
		printf("�� ����� ����������� ��� �ӵ�: %6.2lf km/h \n", average_speed);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}

void Excersize_2_11(int solution, int answer)  // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.15 �Ϸ�
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
	printf("�ڵ��� �Ǹſ��� � ������ī�� ������ �����Ͽ���.\n");
	printf("�� ������ī�� %6.2lf km/h�� �ӵ��� �޸��ٰ� �극��ũ�� ���� �� %6.2lf m �̳����� ������ �� �ִ� ������ ���� �ִٰ� �Ѵ�.\n\n", velocity, distance);
	printf("(a) �� ��� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");

		printf("���� ������ v^2 - v0^2 = 2 * a * ��x �̴�.\n");
		printf("v�� ���� �ӵ�, v0�� ó�� �ӵ�, a�� ���ӵ�, ��x�� ��ġ�� ��ȭ���̴�.\n\n");

		velocity_m_s = velocity * 1000 / 3600;

		printf("������ �ش��� ���ӵ��� ���ϱ� ���ؼ��� km/h �� m/s (��)�� ������ ������� �Ѵ�.\n");
		printf("1 km = 1000 m�� *1000 ��(��) ���ְ� h = 3600 s �̹Ƿ� /3600 s ��(��) ���ش�.\n");
		printf("�׷��Ƿ� %6.2lf km/h = %6.2lf * 1000 / 3600 m/s = %6.2lf m/s �̴�.\n\n", velocity, velocity, velocity_m_s);

		printf("���Ŀ� v, v0,��x�� ���ϰ� �̸� Ȱ���Ͽ� a�� �����ָ� �ȴ�.\n");
		printf("v�� ���� �ӵ��� �극��ũ�� ���� �� �������� �� �ӵ��̹Ƿ� v = %6.2lf m/s �̴�.\n", velocity_f);
		printf("v0�� ó�� �ӵ��� %6.2lf km/h �޸��� �ڵ����� �ӵ��� v = %6.2lf m/s �̴�.\n", velocity, velocity_i);
		printf("��x�� ��ġ�� ��ȭ������ %6.2lf m ��(��) ���������Ƿ� ��x = %6.2lf m �̴�.\n", distance, x_displacement);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		printf("���� ���� v^2 - v0^2 = 2 * a * ��x�� �����ϸ�\n");
		printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m �̴�.\n", velocity_f, velocity_m_s, x_displacement);
		printf("���� a�� ���� ������ �ϸ� a = %6.2lf m/s^2 �̴�\n", acceleration);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

void Excersize_2_15(int solution, int answer)  // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.15 �̿Ϸ�
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
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %5.2lf km/h�̴�.\n\n", velocity);  // %5.2lf�� �Ʒ��� �����Ұ�
	printf("(a) �� ����Ⱑ Ȱ�ַθ� %lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� (a)���� ���Ͽ��� �ϴ°��� ���ӵ� �Դϴ�.\n\n");

		printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n\n");  //���� ���ĵ� �̷��� �ٲټ���

		printf(" ���� �ӵ��� ������ km/h �� m/s �� �ٲ�� �մϴ�.\n\n");

		printf(" km/h �� m/s �� �ٲٷ��� (veloity * 1000) / 3600 �� �� ��� �մϴ�.\n\n");

		printf(" 1000 �� ���ϴ� ������ 1km �� 1000m �̶� �̰�,\n\n");

		printf(" 3600 �� �����ִ� ������ 1h �� 3600s �̱� �����Դϴ�.\n\n");

		velocity_m = pow(velocity * m, 2) / pow(s, 2);

		printf(" m/s�� ������ �ٲ� �ӵ��ǰ��� %lf �Դϴ�.\n\n", velocity_m);

		printf(" velocity^2�� ���߼ӵ� �̹Ƿ� (120 km/h)^2 �̰�,\n\n");   // 120�� ���߿� �ڵ��� �ٲ� ���̹Ƿ� ������ �ٲܰ�

		printf(" velocity0^2�� ó���ӵ� �̹Ƿ� (0)^2 �Դϴ�.\n\n");

		velocity_1 = velocity_m - pow(velocity0, 2);

		printf(" velocity^2 - velocity0^2�� ���� %lf�Դϴ�.\n\n", velocity_1);

		a_1 = num * distance;

		printf(" ���� ������ 2 * a * distance�� %lf �Դϴ�.\n\n ", a_1);  // ������������ ����?

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		printf(" velocity^2 - velocity0^2 = 2 * a * distance�� ��� �ϸ�\n\n");  // ���� �ٲٰ�

		a = velocity_1 / a_1;

		printf(" (a) �� �� %.2lf�� ���ɴϴ�.\n\n", a);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf(" (b)���� ���Ͽ��� �ϴ°��� �ð� �Դϴ�.\n\n ");

		printf("(b)���� �ʿ��� ������ velocity = velocity0 + (a * t) �Դϴ�.\n\n");

		printf(" �� ���� �����ϸ� t = (velocity - velocity0) / a �� �˴ϴ�.\n\n");

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		t = ((velocity * m) / s) / a;

		printf(" ���� ���� ����ϸ� (b)�� �� %.1lf s �� ���ɴϴ�.\n\n", t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}


void Excersize_2_19(int solution, int answer) // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.16 �Ϸ�
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
	printf("%.lf km/h�� �ӷ����� �޸��� ���� �����ڰ� ������ �ִ� �������� �����ƴ�.\n", velocity);
	printf("�� �������� ��� ������ ���ӵ� %.lf km/h/s��(ȥ�յ� ������ �����϶�) �Ѿư��� �����Ͽ���.\n\n", acceleration);
	printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");
		printf("(a) ������ Ǯ�� ���ؼ��� ȥ�յ� ������ ���ӵ��� �����ؾ� �մϴ�. \n");
		printf("km/h/s�� m/s�� ��ȯ�մϴ�.\n\n");

		printf("a = %.lf km/h/s = %.lf km/h/s * 1000m/1km * 1h/3600s * 1/s = %.2lf m/s^2\n\n", acceleration, acceleration, converted_acceleration);

		printf("���� �����ڰ� t�� ���� �޸� �Ÿ��� ������ �����ϴ�. (x1):\n");
		printf("x1 = v0t + 1/2 * a * t^2 = %.1lf m\n\n ", velocity / 3.6);

		printf("�������� t�� ���� �޸� �Ÿ��� ������ �����ϴ�. (x2):\n");
		printf("x2 = x0 + v0t + 1/2 * a * t^2 = 1/2 * %.1lf * t^2 m\n\n", velocity / 3.6);

		printf("���� �����ڰ� �������� ������ �� �ڵ����� �Ÿ��� ���� ���Դϴ�.\n");
		printf("%.1lf m/s = 1/2 * %.2lf m/s^2 * t^2\n\n", velocity / 3.6, converted_acceleration, acceleration / 3.6);

		printf("�� ���� ���������� : t^2 + %.2lft - %.1lf = 0\n", converted_acceleration, velocity / 3.6);
		printf("������������ �ظ� ���ϸ� x1 = %.lf s, x2 = %.lf s�Դϴ�.\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
		printf("�̶� ó�� �޸��� ������ �ð��� 0 s�� ���� �� �� �����ϴ�.\n\n ");
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
			printf("(a) �������� ���� �����ڸ� ����� �� �ɸ� �ð��� t = %.lf s �Դϴ�.\n\n", (-b + e) / (2.0 * a));
			distance = distance * round((-b + e) / (2.0 * a));
		}
		else {
			printf("(a) �������� ���� �����ڸ� ����� �� �ɸ� �ð��� t = %.lf s �Դϴ�.\n\n", (-b - e) / (2.0 * a));
			distance = distance * round((-b - e) / (2.0 * a));
		}
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");
		printf("�ӵ��� ���ϱ� ���ؼ��� v^2 - v0^2 = 2as ������ ����ؾ� �մϴ�.\n");
		printf("�̶� v0^2�� ó���ӵ���, ���� ������ �ִٰ� ����߱� ������ 0 �Դϴ�.\n");
		printf("v^2 = 2 * %.2lf m/s * %.lf m\n", converted_acceleration, distance);
		police_velocity = sqrt(2 * converted_acceleration * distance);
		printf("�̶� v^2 �̹Ƿ� v = sqrt(%.lf m/s) = %.lf m/s\n", 2 * converted_acceleration * distance, police_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(b) �������� �ӵ��� ������ �����ϴ�.\n");
		printf("v = %.1lf m/s = %.lf km/h\n\n", police_velocity, police_velocity * 3.6);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}


void Excersize_2_28(int solution, int answer)  // �Ѷ���б� �̷������Ƽ���а� �ȼ�ȣ 2023.04.16 �̿Ϸ�  2�������� �κ� �ذ�
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

		printf("�ְ� ������ ���� ������ ���ϼ���. \n\n");
		printf("�ְ� ������ ���� ������ �ְ� ���� �ӵ��� ���� - �������� �ӵ��� ���� = 2 * ���ӵ� * �ְ� ���� - ���� ���� \n");
		printf("v^2 - v0^2 = 2 * a * ��y �Դϴ�.\n\n");
		printf("�ְ� ���̿����� �ӵ��� 0m/s �̹Ƿ�. \n\n");		
		printf("�ְ� ���̿� ���� ������ ǥ���ϸ� �ְ� ���� = �������� �ӵ����� / 2 * ���ӵ� \n");
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
		printf("�ִ� ���� ���޽ð� ������ : �ְ� ������ �ӵ� = �������� �ӵ� + (���ӵ� * �ְ� ���� ���� �ð�) \n");
		printf("v = v0 + a * t \n\n");
		printf("�ְ� ������ �ӵ��� 0m/s�̹Ƿ� ������ �ִ� ���� ���޽ð����� �����: \n");
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


	//Excersize_2_1(1,1);  // �Ϸ�
	//Excersize_2_3(1,1);  // �Ϸ�
	//Excersize_2_5(1,1);  // �Ϸ�
	//Excersize_2_11(1,1);  // �Ϸ�
	//Excersize_2_13(1,1);

	//Excersize_2_15(1, 1);
	//Excersize_2_19(1, 1); // �Ϸ�

	//Excersize_2_2(1, 0);
	//Excersize_2_12(1, 0);
	//Excersize_2_22(1, 0);
	  Excersize_2_28(1, 1);




}

