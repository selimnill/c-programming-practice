#include <stdio.h>
int main()
{

    int t, s, a, b, c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &s, &a, &b, &c);
        s = s - (a + b + c);
        printf("%d\n", s);
    }

    return 0;
}