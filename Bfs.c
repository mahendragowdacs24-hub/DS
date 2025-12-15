#include <stdio.h>

#define N 5

int graph[N][N] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 0},
    {1, 0, 0, 1, 1},
    {0, 1, 1, 0, 0},
    {0, 0, 1, 0, 0}
};

int visited[N] = {0};
int queue[N];
int front = 0, rear = -1;

void bfs(int start) {
    printf("%d ", start);
    visited[start] = 1;
    queue[++rear] = start;

    while (front <= rear) {
        int v = queue[front++];

        for (int i = 0; i < N; i++) {
            if (graph[v][i] == 1 && !visited[i]) {
                printf("%d ", i);
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main() {
    int start = 0;
    printf("BFS traversal: ");
    bfs(start);
    return 0;
}
