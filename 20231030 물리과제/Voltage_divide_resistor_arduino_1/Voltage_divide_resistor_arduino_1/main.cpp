#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//  ����(R1)�ϳ� , ���޿��� ����(V) , ���� ����(V)�� ���ϴ� ����(R2)

int main()
{
    double supply_voltage, resistance1, measured_voltage, resistance2;

    printf("���� ���޿� ���� (V): ");
    scanf("%lf", &supply_voltage);

    printf("���� ���� (V): ");
    scanf("%lf", &measured_voltage);

    printf("R2(��): ");
    scanf("%lf", &resistance2);

    resistance1 = (supply_voltage * resistance2) / measured_voltage - resistance2;

    printf("R1(��): %.2lf\n", resistance1);

    return 0;
}
