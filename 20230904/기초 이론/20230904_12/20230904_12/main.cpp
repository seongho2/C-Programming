#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	FILE* fp = NULL;
	char name[50], name2[50];
	int num, num2;
	double score, score2;
	printf("�л��� �̸�, �й�, ���� �Է�: ");
	scanf_s("%s %d %lf", name, 50, &num, &score);
	fopen_s(&fp, "score.txt", "wt");
	fprintf(fp, "%s %d %f", name, num, score);
	fclose(fp);
	fopen_s(&fp, "score.txt", "rt");
	if (fp == NULL) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	int c = fscanf_s(fp, "%s %d %lf", name2, 50, &num2, &score2);
	printf("���Ϸκ��� �Է¹��� �л� ����(�Է¿� ������ ������ �� : %d)\n�̸�: %s\n�й�: %d\n����: %f\n", c, name2, num2, score2);
	fclose(fp);
	return 0;
}