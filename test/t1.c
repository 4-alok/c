// WAP for implementing double ended queue using array.

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void insertFront(int x) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[front] = x;
    } else if (front == 0) {
        printf("Queue is full.\n");
    } else {
        front--;
        queue[front] = x;
    }
}

void insertRear(int x) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else if (rear == MAX - 1) {
        printf("Queue is full.\n");
    } else {
        rear++;
        queue[rear] = x;
    }
}

void deleteFront() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty.\n");
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void deleteRear() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty.\n");
    } else if (front == rear) {
        front = rear = -1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty.\n");
    } else {
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, x;
    while (1) {
        printf("1. Insert at front\n");
        printf("2. Insert at rear\n");
        printf("3. Delete from front\n");
        printf("4. Delete from rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &x);
                insertFront(x);
                break;
            case 2:
                printf("Enter the element to be inserted: ");
                scanf("%d", &x);
                insertRear(x);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}