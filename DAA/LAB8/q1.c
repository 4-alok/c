// WAP for fracctoinal knapsack problem using greedy approach.

#include <stdio.h>
#include <stdlib.h>

struct item {
    int weight;
    int value;
    float ratio;
};

int compare(const void *a, const void *b) {
    return ((struct item *)b)->ratio - ((struct item *)a)->ratio;
}

int main() {
    int n, w;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    struct item *a = (struct item *)malloc(n * sizeof(struct item));
    printf("Enter the weights and values of the items: ");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i].weight, &a[i].value);
        a[i].ratio = (float)a[i].value / a[i].weight;
    }
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &w);
    qsort(a, n, sizeof(struct item), compare);
    int i = 0;
    float profit = 0;
    while (w > 0 && i < n) {
        if (a[i].weight <= w) {
            profit += a[i].value;
            w -= a[i].weight;
        } else {
            profit += a[i].ratio * w;
            w = 0;
        }
        i++;
    }
    printf("The maximum profit is %f units. ", profit);
    printf("\n The items selected are: ");
    for (int j = 0; j < i; j++) {
        printf("%d ", j + 1);
    }

    printf("\n");
    return 0;
}