#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int select;
	int	ResistorsCount;
	double resistance;
	double totalResistance;

	printf("�ռ� ������ ����� ���� ������ �����ϼ���:\n");
	printf("(1) ���� ����\n");
	printf("(2) ���� ����\n");
	scanf("%d", &select);

	if (select == 1) {
		printf("���� ������ �����ϼ̽��ϴ�.\n");
		printf("������ ������ �Է��ϼ���: ");
		scanf("%d", &ResistorsCount);

		totalResistance = 0.0;
		for (int i = 0; i < ResistorsCount; i++) {
			printf("���� %d�� ���� �Է��ϼ��� (��): ", i + 1);
			scanf("%lf", &resistance);
			totalResistance += resistance;
		}

		printf("�� �ռ� ������ %.2lf �� �Դϴ�.\n", totalResistance);
	}
	else if (select == 2) {
		printf("���� ������ �����ϼ̽��ϴ�.\n");
		printf("������ ������ �Է��ϼ���: ");
		scanf("%d", &ResistorsCount);

		totalResistance = 0.0;
		for (int i = 0; i < ResistorsCount; i++) {
			printf("���� %d�� ���� �Է��ϼ��� (��): ", i + 1);
			scanf("%lf", &resistance);
			if (resistance == 0.0) {
				printf("0���� ���� �� �����ϴ�. �ٸ� ���� �Է��ϼ���.\n");
				i--;
			}
			else {
				totalResistance += 1.0 / resistance;
			}
		}

		totalResistance = 1.0 / totalResistance;
		printf("�� �ռ� ������ %.2lf �� �Դϴ�.\n", totalResistance);
	}
	else {
		printf("�ùٸ� ������ �ƴմϴ�. 1 �Ǵ� 2�� �Է��ϼ���.\n");
	}

	return 0;
}