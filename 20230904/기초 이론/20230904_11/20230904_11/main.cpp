#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp = NULL;
	char buf1[100], buf2[100];
	printf("���� �Է�: ");
	fgets(buf1,sizeof(buf1),stdin);
	fopen_s(&fp, "text.txt", "wt");
	fputs(buf1, fp);
	fclose(fp);
	fopen_s(&fp, "text.txt", "rt");
	if (fp == NULL) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	char str[100];
	strcpy_s(str, 100, fgets(buf2, 100, fp));
	printf("%s ���Ϸκ��� ���� ���ڿ� : %s\n", str, buf2);
	fclose(fp);
	return 0;
}