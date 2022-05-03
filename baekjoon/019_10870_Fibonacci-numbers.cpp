#include <cstdio>

int main()
{
    int n, f1 = 1, f2 = 1;
    scanf("%d", &n);

    for(int i = 3; i <= n; i++)
    {
        int temp = f1 + f2;
        f2 = f1;
        f1 = temp;
    }

    if(n == 0)
    printf("0");
    else
    printf("%d", f1);

    return 0;
}