// wap for an nxn square matrix A
// i. find the no of non-zero elements in the matrix A
// ii. find the sum of all the elements above the main diagonal in the matrix A
// iii. find the product of diagonal elements in the matrix A

#include<stdio.h>
#include<stdlib.h>

int main() {

    printf("Enter the size of the matrix: ");
    int n;
    scanf("%d", &n);
    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Enter the elements of the matrix: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0; int sum = 0; int prod = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }

    // sum of all the elements above the main diagonal in the matrix A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                sum += arr[i][j];
            }
        }
    }

    // product of diagonal elements in the matrix A
    for (int i = 0; i < n; i++) {
        prod *= arr[i][i];
    }
    printf("The number of non-zero elements in the matrix is: %d\n", count);
    printf("The sum of all the elements above the main diagonal in the matrix is: %d\n", sum);
    printf("The product of diagonal elements in the matrix is: %d\n", prod);
    return 0;
}