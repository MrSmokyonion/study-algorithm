#include <cstdio>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    for(int i = m; i <= n; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                break;
            }
            else if(j == i-1)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}