//wap to find out occrance of each digits and print the max occrance of digits

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int arr[] = {5, 2, 8, 7, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int count[10] = {0};
    for (int i = 0; i < length; i++)
    {
        count[arr[i]]++;
    }
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
    }
    printf("Max occurance of digits is %d\n", max);
    return 0;
}