#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int ReturnPlusOne(int n)
{
	return n + 1;
}
int ReturnPlusOne1(void)
{
	int number = 3;
	printf("%d\n", number);

	number = 5;
	printf("%d\n", number);

	number = ReturnPlusOne(number);
	printf("%d\n", number);

	return 0;
}
void ChangePlusOne(int n)
{
	n += 1;
}
int ChangePlusOne1(void)
{
	int number = 3;

	printf("%d\n", number);
	number = 5;

	printf("%d\n", number);
	ChangePlusOne(number);
	printf("%d\n", number);

	return 0;
}
int ChangePlusOne2(void)
{
	int num1 = 3;
	int num2 = 6;
	int* num1Pointer = &num1;
	int* num2Pointer = &num2;

	printf("%d, %d\n", num1, *num1Pointer);
	printf("%d, %d\n", num2, *num2Pointer);

	return 0;
}
int function1(void)
{
	int num = 5;
	int* p;
	p = &num;

	printf(" num: %d\n", num);
	printf("  *p: %d\n",  *p);
	printf("   p: %d\n",   p);
	printf("&num: %d\n", &num);

	return 0;
}
void ChangeDouble(int* p)
{
	*p = *p * 2;
}
int main(void)
{
	int num;
	printf("숫자 입력 : ");
	scanf("%d", &num);

	ChangeDouble(&num);
	printf("%d\n", num);
	return 0;
}
int function2(void)
{
	int num;
	int* numP = &num;

	printf("숫자 입력 : ");
	scanf("%d", &num);

	printf("  num: %d\n", num);
	printf("*numP: %d\n\n", *numP);
	printf(" &num: %d\n", &num);
	printf(" numP: %d\n", numP);

	return 0;
}
void ChangeSquare(int* p)
{
	*p = *p * *p;
}
int main(void)
{
	int num;

	printf("숫자 입력 : ");
	scanf("%d", &num);

	ChangeSquare(&num);
	printf("제곱 : %d\n", num);

	return 0;
}
void ChangeNumbers(int* p1, int* p2) {
	int temp = *p1;  //swap하는 작업.
	*p1 = *p2;
	*p2 = temp;
}
int main(void)
{
	int num1;
	int num2;

	printf("숫자1 : ");
	scanf("%d", &num1);
	printf("숫자2 : ");
	scanf("%d", &num2);

	printf("바꾸기 전\n 숫자1 : %d, 숫자2 : %d\n", num1, num2);
	ChangeNumbers(&num1, &num2);
	printf("바꾼 후\n 숫자1 : %d, 숫자2 : %d\n", num1, num2);

	return 0;
}