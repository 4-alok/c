// WAP for inseriton sort compare the bast case, worst case and average case for diffetent value of n

#include<stdio.h>
#include<stdlib.h>

void inseritonSort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
            a[j + 1] = a[j];
        a[j + 1] = temp;
    }
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int n, i, a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nUnsorted array: ");
    printArray(a, n);
    inseritonSort(a, n);
    printf("\nSorted array: ");
    printArray(a, n);
    return 0;
}