// wap to display an array of n integer (n>1), where at every index array,
// then should be the product of all the elements of the array except the element at that index.

// input array   3    4    5     1     2
// output array  40   30   24    120   60

#include<stdio.h>
#include<stdlib.h>

int main() {

    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *arr2 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                prod *= arr[j];
            }
        }
        arr2[i] = prod;
    }
    printf("The array after multiplication is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}