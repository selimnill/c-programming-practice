#include <stdio.h>
#include <stdlib.h>

void find_middle_number(int N[], int length) {
    int middleIndex = length / 2;
    int middleIndex2 = (length / 2)-1;
    int middleNumber = N[middleIndex];
    int middleNumber2 = N[middleIndex2];

    if(length %2 == 0)
    {
        printf("%d %d\n",middleNumber2, middleNumber );
    }
    else{
        printf("%d \n", middleNumber);
    }
}

int compare(const void *a, const void *b) {
    int *x = (int *)a;
    int *y = (int *)b;

    if (*x < *y) {
        return -1;
    } else if (*x > *y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int length;
    scanf("%d", &length);

    int N[length];

    for (int i = 0; i < length; i++) {
        scanf("%d", &N[i]);
    }

    // Sort the array in ascending order
    qsort(N, length, sizeof(int), compare);

    find_middle_number(N, length);

    return 0;
}
