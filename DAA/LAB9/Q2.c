// WAP for BFS implementation of graph

#include <stdio.h>
#include <stdlib.h>

void bfs(int a[10][10], int n, int s, int visited[10])
{
    int q[10], f = 0, r = -1, i, v;
    q[++r] = s;
    visited[s] = 1;
    while (f <= r)
    {
        v = q[f++];
        printf("%d ", v);
        for (i = 1; i <= n; i++)
        {
            if (a[v][i] == 1 && visited[i] == 0)
            {
                q[++r] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int a[10][10], n, i, j, s, visited[10];
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the starting vertex: ");
    scanf("%d", &s);
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    printf("The BFS traversal is: ");
    bfs(a, n, s, visited);
    return 0;
}