#include <stdio.h>

int isUnitMatrix(int matrix[][100], int N) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i != j && matrix[i][j] != 0)
                return 0;
            
            if (i == j && matrix[i][j] != 1)
                return 0;
        }
    }

    return 1;  
}

int main() {
    int N, i, j;

    scanf("%d", &N);

    int matrix[100][100];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isUnitMatrix(matrix, N))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
