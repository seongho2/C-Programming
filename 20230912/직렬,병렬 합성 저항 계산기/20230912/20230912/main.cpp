#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int select;
	int	ResistorsCount;
	double resistance;
	double totalResistance;

	printf("합성 저항을 계산할 연결 유형을 선택하세요:\n");
	printf("(1) 직렬 연결\n");
	printf("(2) 병렬 연결\n");
	scanf("%d", &select);

	if (select == 1) {
		printf("직렬 연결을 선택하셨습니다.\n");
		printf("저항의 개수를 입력하세요: ");
		scanf("%d", &ResistorsCount);

		totalResistance = 0.0;
		for (int i = 0; i < ResistorsCount; i++) {
			printf("저항 %d의 값을 입력하세요 (Ω): ", i + 1);
			scanf("%lf", &resistance);
			totalResistance += resistance;
		}

		printf("총 합성 저항은 %.2lf 옴 입니다.\n", totalResistance);
	}
	else if (select == 2) {
		printf("병렬 연결을 선택하셨습니다.\n");
		printf("저항의 개수를 입력하세요: ");
		scanf("%d", &ResistorsCount);

		totalResistance = 0.0;
		for (int i = 0; i < ResistorsCount; i++) {
			printf("저항 %d의 값을 입력하세요 (Ω): ", i + 1);
			scanf("%lf", &resistance);
			if (resistance == 0.0) {
				printf("0으로 나눌 수 없습니다. 다른 값을 입력하세요.\n");
				i--;
			}
			else {
				totalResistance += 1.0 / resistance;
			}
		}

		totalResistance = 1.0 / totalResistance;
		printf("총 합성 저항은 %.2lf 옴 입니다.\n", totalResistance);
	}
	else {
		printf("올바른 선택이 아닙니다. 1 또는 2를 입력하세요.\n");
	}

	return 0;
}