#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* file;
    char ch;

    file = fopen("test.txt", "r");

    if (file == NULL) 
    {
        perror("���� ���� ����");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}