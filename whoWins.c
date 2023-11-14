#include <stdio.h>

int main() {
    int N, i, TigerScore = 0, PathanScore = 0;
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        int X1, X2;
        scanf("%d", &X1);
        scanf("%d", &X2);

        if (X1 > X2) {
            TigerScore++;
        } else if (X2 > X1) {
            PathanScore++;
        } else {
            
        }
    }
    if (TigerScore > PathanScore) {
        printf("Tiger\n");
    } else if (PathanScore > TigerScore) {
        printf("Pathan\n");
    } else {
        printf("Draw\n");
    }

    return 0;
}
