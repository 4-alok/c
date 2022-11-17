// WAP for matrix chain multiplication using dynamic programming.

#include <stdio.h>
#include <stdlib.h>

INT_MAX = 1000;

int min(int a, int b) {
    return a < b ? a : b;
}

int mcm(int *arr, int n) {
    int dp[n][n];
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j]);
            }
        }
    }
    return dp[1][n - 1];
}

int main() {
    int n;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the dimensions of the matrices: ");
    for (int i = 0; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The minimum number of multiplications required is: %d\n", mcm(arr, n + 1));
    return 0;
}