// WAP for DFS implementation of graph.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createNode(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addEdge(struct node *adjList[], int src, int dest) {
    struct node *newNode = createNode(dest);
    newNode->next = adjList[src];
    adjList[src] = newNode;
    newNode = createNode(src);
    newNode->next = adjList[dest];
    adjList[dest] = newNode;
}

void printGraph(struct node *adjList[], int n) {
    for (int i = 0; i < n; i++) {
        struct node *temp = adjList[i];
        printf("Adjacency list of vertex %d is: ", i);
        while (temp) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void DFS(struct node *adjList[], int n, int src, int visited[]) {
    visited[src] = 1;
    printf("%d ", src);
    struct node *temp = adjList[src];
    while (temp) {
        if (!visited[temp->data]) {
            DFS(adjList, n, temp->data, visited);
        }
        temp = temp->next;
    }
}

int main() {
    int n, e;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    struct node *adjList[n];
    for (int i = 0; i < n; i++) {
        adjList[i] = NULL;
    }
    printf("Enter the number of edges: ");
    scanf("%d", &e);
    printf("Enter the edges: ");
    for (int i = 0; i < e; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(adjList, src, dest);
    }
    printGraph(adjList, n);
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    printf("Enter the source vertex: ");
    int src;
    scanf("%d", &src);
    printf("The DFS traversal is: ");
    DFS(adjList, n, src, visited);
    printf("\n");
    return 0;
}