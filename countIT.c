#include <stdio.h>
#include <ctype.h>

void countCharacters(const char *S, int *small, int *capital, int *spaces) {
    int i = 0;
    while (S[i] != '\0') {
        if (islower(S[i]))
            (*small)++;
        else if (isupper(S[i]))
            (*capital)++;
        else if (isspace(S[i]))
            (*spaces)++;
        
        i++;
    }
}

int main() {
    char S[1000];
    int small = 0, capital = 0, spaces = 0;

    fgets(S, sizeof(S), stdin);

    countCharacters(S, &small, &capital, &spaces);

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", spaces);

    return 0;
}
