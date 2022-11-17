#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5] = {1, 2, 10, 4, 5};
    int *p = &a[2];
    int *q = &a[2];

    printf("Value at p: %d\n", *p);
    printf("Value at q: %d\n", *q);

    printf("\n");
    // printf("%d\n", ++*p);
    // printf("%d\n", *++p);
    // printf("%d\n", *p++);
    printf("%d\n", (*p)++);
    return 0;
}