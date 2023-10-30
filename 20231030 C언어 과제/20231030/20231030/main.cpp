#include <stdio.h>
#include <stdlib.h>    
/*
//5 - 1
void bubble_sort(int arr[], int count)    
{
    int temp;
    for (int i = 0; i < count; i++)    
    {
        for (int j = 0; j < count - 1; j++)   
        {
            if (arr[j] > arr[j + 1])         
            {                                 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;         
            }
        }
    }
}
int main()
{
    int numArr[10] = { 5, 4, 1, 8, 3, 7, 9, 2, 6, 10 };   
    bubble_sort(numArr, sizeof(numArr) / sizeof(int));    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);    // 1 2 3 4 5 6 7 8 9 10
    }
    printf("\n");
    return 0;
}*/
// 5 - 2
int compare(const void* a, const void* b)    
{
    int num1 = *(int*)a;   
    int num2 = *(int*)b;    
    if (num1 < num2)   
        return -1;      
    if (num1 > num2)    
        return 1;       
    return 0;    
}

int main()
{
    int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };      
    qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);    
    }
    printf("\n");

    return 0;
}