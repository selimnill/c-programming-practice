#include <stdio.h>
int main()
{

    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 == 1)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        if (i <= n - 1)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }
        printf("\n");
    }
    return 0;
}