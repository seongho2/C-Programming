#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int num;

    printf("���װ� ���ϱ�\n");
    printf("4���� ��� 4, 5���� ��� 5�� �Է��ϼ���: ");
    scanf("%d", &num);

    if (num == 4) {
        double color1, color2, color3, color4;
        double ohm = 0;
        double ans = 1;
        double tolerance = 0;

        printf("0: ��, 1: ��, 2: �� , 3: ��, 4: Ȳ, 5: ��, 6: û, 7: ��, 8: ȸ, 9: ��, 10: ��, 11: ��\n");
        printf("ù ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color1);
        printf("�� ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color2);
        printf("�� ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color3);
        printf("�� ��° ���� �Է��ϼ��� (1: ��, 2: ��,  5: ��, 6: û, 7: ��, 8: ȸ, 10: ��, 11: ��): ");
        scanf("%lf", &color4);

        for (int i = 0; i < color3; i++) {
            ans *= 10;
        }

        if ((int)color4 == 1) {
            tolerance = 1;
        }
        else if ((int)color4 == 2) {
            tolerance = 2;
        }
        else if ((int)color4 == 5) {
            tolerance = 0.5;
        }
        else if ((int)color4 == 6) {
            tolerance = 0.25;
        }
        else if ((int)color4 == 7) {
            tolerance = 0.1;
        }
        else if ((int)color4 == 8) {
            tolerance = 0.05;
        }
        else if ((int)color4 == 10) {
            tolerance = 5;
        }
        else if ((int)color4 == 11) {
            tolerance = 10;
        }
        else if ((int)color4 == 12) {
            tolerance = 20;
        }
        else {
            printf("��ȿ���� ���� ���� ���Դϴ�.\n");
            return 1;
        }

        ohm = (color1 * 10 + color2) * ans;

        if (ohm >= 1 && ohm < 1000) {
            printf("���װ� = %.1lf��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000 && ohm < 1000000) {
            ohm /= 1000;
            printf("���װ� = %.1lfK��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000000 && ohm < 1000000000) {
            ohm /= 1000000;
            printf("���װ� = %.1lfM��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else {
            ohm /= 1000000000;
            printf("���װ� = %.1lfG��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
    }
    else if (num == 5) {
        double color1, color2, color3, color4, color5;
        double ohm = 0;
        double ans = 1;
        double tolerance = 0;

        printf("0: ��, 1: ��, 2: �� , 3: ��, 4: Ȳ, 5: ��, 6: û, 7: ��, 8: ȸ, 9: ��, 10: ��, 11: ��\n");
        printf("ù ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color1);
        printf("�� ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color2);
        printf("�� ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color3);
        printf("�� ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color4);
        printf("�ټ� ��° ���� �Է��ϼ��� (1: ��, 2: ��,  5: ��, 6: û, 7: ��, 8: ȸ, 10: ��, 11: ��): ");
        scanf("%lf", &color5);

        for (int i = 0; i < color4; i++) {
            ans *= 10;
        }

        if ((int)color5 == 1) {
            tolerance = 1;
        }
        else if ((int)color5 == 2) {
            tolerance = 2;
        }
        else if ((int)color5 == 5) {
            tolerance = 0.5;
        }
        else if ((int)color5 == 6) {
            tolerance = 0.25;
        }
        else if ((int)color5 == 7) {
            tolerance = 0.1;
        }
        else if ((int)color5 == 8) {
            tolerance = 0.05;
        }
        else if ((int)color5 == 10) {
            tolerance = 5;
        }
        else if ((int)color5 == 11) {
            tolerance = 10;
        }
        else if ((int)color5 == 12) {
            tolerance = 20;
        }
        else {
            printf("��ȿ���� ���� ���� ���Դϴ�.\n");
            return 1;
        }

        ohm = (color1 * 100 + color2 * 10 + color3) * ans;

        if (ohm >= 1 && ohm < 1000) {
            printf("���װ� = %.1lf��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000 && ohm < 1000000) {
            ohm /= 1000;
            printf("���װ� = %.1lfK��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000000 && ohm < 1000000000) {
            ohm /= 1000000;
            printf("���װ� = %.1lfM��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else {
            ohm /= 1000000000;
            printf("���װ� = %.1lfG��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
    }
    else {
        printf("�ùٸ� ���ڸ� �Է��ϼ��� (4 �Ǵ� 5).\n");
    }

    return 0;
}