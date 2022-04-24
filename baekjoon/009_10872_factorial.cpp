#include <stdio.h>

int main()
{
    int n, var = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        var = var * i;
    }

    printf("%d", var);

    return 0;
}