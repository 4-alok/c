#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 8, 7, 1};
    int temp = 0;

    int length = sizeof(arr) / sizeof(arr[0]);

    printf("enter the no. to know the position :");
    scanf("%d", &temp);



    for (int i = 0; i < length; i++)
    {
        if (temp == arr[i])
        {
            printf("position of %d is a[%d]", arr[i],i);
        }
    }
    return 0;
}