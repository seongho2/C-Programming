#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct Node
{
	int a;
	double b;
};
int main()
{
	struct Node* print;
	FILE* fp;
	fp = fopen("data.txt", "wb"); // 바이너리값으로 저장
	print = (struct Node*)malloc(sizeof(struct Node));
	print->a = 1;
	print->b = 3.14;
	fwrite((void*)print, sizeof(struct Node), 1, fp);
	fclose(fp); 
	free(print);
}