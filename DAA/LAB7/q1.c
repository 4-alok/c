// WAP for the activity selection problem using greedy apporach

#include "stdio.h"
#include "stdlib.h"

struct activity {
    int start;
    int finish;
};

int compare(const void *a, const void *b) {
    return ((struct activity *)a)->finish - ((struct activity *)b)->finish;
}

int main() {
    int n;
    printf("Enter the number of activities: ");
    scanf("%d", &n);
    struct activity *a = (struct activity *)malloc(n * sizeof(struct activity));
    printf("Enter the start and finish time of each activity: ");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i].start, &a[i].finish);
    }
    qsort(a, n, sizeof(struct activity), compare);
    printf("The activities to be selected are: ");
    int i = 0;
    printf("%d ", i);
    for (int j = 1; j < n; j++) {
        if (a[j].start >= a[i].finish) {
            printf("%d ", j);
            i = j;
        }
    }
    printf("\n");
    return 0;
}