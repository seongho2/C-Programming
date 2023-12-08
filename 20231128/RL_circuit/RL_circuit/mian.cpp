#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double dt = 0.1;
double t_end = 5.0;

double R, L, V;

double calculate_current(double I, double t) {
    double dI_dt = (V - R * I) / L;
    return I + dI_dt * dt;
}

int main() {
    printf("R (resistance): ");
    scanf("%lf", &R);

    printf("L (inductance): ");
    scanf("%lf", &L);

    printf("V (voltage): ");
    scanf("%lf", &V);

    double I = 0.0;
    double t = 0.0;

    while (t <= t_end) {
        printf("��: %.1fs, ����: %.4fA\n", t, I);

        I = calculate_current(I, t);
        t += dt;
    }

    return 0;
}
