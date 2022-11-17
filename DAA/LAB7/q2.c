// WAP for haffman coding using greedy approach

#include <stdio.h>
#include <stdlib.h>

struct node {
    int freq;
    char ch;
    struct node *left;
    struct node *right;
};

struct node *newNode(int freq, char ch) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->freq = freq;
    temp->ch = ch;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int compare(const void *a, const void *b) {
    return ((struct node *)a)->freq - ((struct node *)b)->freq;
}

void printCodes(struct node *root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (!(root->left) && !(root->right)) {
        printf("%c: ", root->ch);
        for (int i = 0; i < top; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);
    struct node *a = (struct node *)malloc(n * sizeof(struct node));
    printf("Enter the characters and their frequencies: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &a[i].ch, &a[i].freq);
        a[i].left = NULL;
        a[i].right = NULL;
    }
    qsort(a, n, sizeof(struct node), compare);
    while (n > 1) {
        struct node *temp = newNode(a[0].freq + a[1].freq, '\0');
        temp->left = &a[0];
        temp->right = &a[1];
        a[0] = *temp;
        for (int i = 2; i < n; i++) {
            a[i - 1] = a[i];
        }
        n--;
        qsort(a, n, sizeof(struct node), compare);
    }
    int arr[100];
    printCodes(&a[0], arr, 0);
    return 0;
}