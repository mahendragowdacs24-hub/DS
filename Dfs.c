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

void dfs(int v) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < N; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int start = 0;
    printf("DFS traversal: ");
    dfs(start);
    return 0;
}
