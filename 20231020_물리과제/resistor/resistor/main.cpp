#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int num;

    printf("저항값 구하기\n");
    printf("4색띠 라면 4, 5색띠 라면 5를 입력하세요: ");
    scanf("%d", &num);

    if (num == 4) {
        double color1, color2, color3, color4;
        double ohm = 0;
        double ans = 1;
        double tolerance = 0;

        printf("0: 흑, 1: 갈, 2: 적 , 3: 등, 4: 황, 5: 록, 6: 청, 7: 자, 8: 회, 9: 백, 10: 금, 11: 은\n");
        printf("첫 번째 색을 입력하세요: ");
        scanf("%lf", &color1);
        printf("두 번째 색을 입력하세요: ");
        scanf("%lf", &color2);
        printf("세 번째 색을 입력하세요: ");
        scanf("%lf", &color3);
        printf("네 번째 색을 입력하세요 (1: 갈, 2: 적,  5: 록, 6: 청, 7: 자, 8: 회, 10: 금, 11: 은): ");
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
            printf("유효하지 않은 오차 값입니다.\n");
            return 1;
        }

        ohm = (color1 * 10 + color2) * ans;

        if (ohm >= 1 && ohm < 1000) {
            printf("저항값 = %.1lfΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000 && ohm < 1000000) {
            ohm /= 1000;
            printf("저항값 = %.1lfKΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000000 && ohm < 1000000000) {
            ohm /= 1000000;
            printf("저항값 = %.1lfMΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else {
            ohm /= 1000000000;
            printf("저항값 = %.1lfGΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
    }
    else if (num == 5) {
        double color1, color2, color3, color4, color5;
        double ohm = 0;
        double ans = 1;
        double tolerance = 0;

        printf("0: 흑, 1: 갈, 2: 적 , 3: 등, 4: 황, 5: 록, 6: 청, 7: 자, 8: 회, 9: 백, 10: 금, 11: 은\n");
        printf("첫 번째 색을 입력하세요: ");
        scanf("%lf", &color1);
        printf("두 번째 색을 입력하세요: ");
        scanf("%lf", &color2);
        printf("세 번째 색을 입력하세요: ");
        scanf("%lf", &color3);
        printf("네 번째 색을 입력하세요: ");
        scanf("%lf", &color4);
        printf("다섯 번째 색을 입력하세요 (1: 갈, 2: 적,  5: 록, 6: 청, 7: 자, 8: 회, 10: 금, 11: 은): ");
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
            printf("유효하지 않은 오차 값입니다.\n");
            return 1;
        }

        ohm = (color1 * 100 + color2 * 10 + color3) * ans;

        if (ohm >= 1 && ohm < 1000) {
            printf("저항값 = %.1lfΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000 && ohm < 1000000) {
            ohm /= 1000;
            printf("저항값 = %.1lfKΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000000 && ohm < 1000000000) {
            ohm /= 1000000;
            printf("저항값 = %.1lfMΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else {
            ohm /= 1000000000;
            printf("저항값 = %.1lfGΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
    }
    else {
        printf("올바른 숫자를 입력하세요 (4 또는 5).\n");
    }

    return 0;
}