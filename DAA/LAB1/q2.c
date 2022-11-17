#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 8, 7, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    int temp = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j < length; j++)
        {
            int temp2;
            temp2 = arr[i] + arr[j];
            if (temp2 > temp)
            {
                temp = temp2;
            }
        }
    }
    printf("Largest sum is %d\n", temp);
    return 0;
}
