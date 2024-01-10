#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double R, L, C_micro;
    double f = 60.0;
    double V_max = 150.0;

    printf("���ױ��� R (��): ");
    scanf("%lf", &R);

    printf("������ ������� L (H) : ");
    scanf("%lf", &L);

    printf("����뷮 C (uF) : ");
    scanf("%lf", &C_micro);

    double C = C_micro * 0.000001;

    double XL = 2.0 * M_PI * f * L;
    double XC = 1.0 / (2.0 * M_PI * f * C);
    double impedance = sqrt(R * R + (XL - XC) * (XL - XC));

    double I_max = V_max / impedance;

    double phase_angle = atan((XL - XC) / R);
    double phase_angle_degrees = (phase_angle * 180.0) / M_PI;

    double V_R = R * I_max;
    double V_L = XL * I_max;
    double V_C = XC * I_max;

    printf("(a) ���Ǵ���: %.2lf ��\n", impedance);
    printf("(b) �ִ� ����: %.2lf A\n", I_max);
    printf("(c) ����: %.2lf ��\n", phase_angle_degrees);
    printf("(d) �ִ�����:\n");
    printf("    - VR_max: %.2lf V\n", V_R);
    printf("    - VL_max: %.2lf V\n", V_L);
    printf("    - VC_max: %.2lf V\n", V_C);

    return 0;
}
