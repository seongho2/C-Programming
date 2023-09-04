#define _CRT_SECURE_NO_WARNINGS
#define Max 10
#include <stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("Sunday.txt", "w");
	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);
	fclose(fp);
}