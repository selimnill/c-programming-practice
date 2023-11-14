#include <stdio.h>

void printLastRowAndColumn(int matrix[][100], int N, int M) {
    int i, j;

    // Print the last row
    for (j = 0; j < M; j++) {
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");

    // Print the last column
    for (i = 0; i < N; i++) {
        printf("%d", matrix[i][M - 1]);
    }
}

int main() {
    int N, M, i, j;

    scanf("%d %d", &N, &M);
    int matrix[100][100];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printLastRowAndColumn(matrix, N, M);

    return 0;
}
