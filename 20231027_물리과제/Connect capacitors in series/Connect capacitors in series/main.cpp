#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_CAPACITOR 10

int main() {
    int choice, n;
    double capacitors[MAX_NO_CAPACITOR] = { 0.0 };

    printf("1. ���� ���� (Serial Connection)\n");
    printf("2. ���� ���� (Parallel Connection)\n");
    printf("� ���� ����� �����Ͻðڽ��ϱ�? (1 �Ǵ� 2 �Է�): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("�߸��� �����Դϴ�. ���α׷��� �����մϴ�.\n");
        return 1;
    }

    printf("Ŀ�н����� ������ �Է��Ͻʽÿ� (�ִ� %d��): ", MAX_NO_CAPACITOR);
    scanf("%d", &n);

    if (n < 1 || n > MAX_NO_CAPACITOR) {
        printf("��ȿ���� ���� Ŀ�н��� �����Դϴ�. ���α׷��� �����մϴ�.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Ŀ�н��� #%d�� �� (F): ", i + 1);
        scanf("%lf", &capacitors[i]);
    }

    double totalCapacitance;

    if (choice == 1) { // ���� ����
        totalCapacitance = 0.0;
        for (int i = 0; i < n; i++) {
            totalCapacitance += 1.0 / capacitors[i];
        }
        totalCapacitance = 1.0 / totalCapacitance;
    }
    else if (choice == 2) { // ���� ����
        totalCapacitance = 0.0;
        for (int i = 0; i < n; i++) {
            totalCapacitance += capacitors[i];
        }
    }

    printf("�ռ� Ŀ�н��� ��: %.2lf F\n", totalCapacitance);

    return 0;
}
