#include <cstdio>

int getNum(int a, int b)
{   
    if(a == 0)
        return b;
    if(b == 1)
        return 1;
    return (getNum(a-1, b) + getNum(a, b-1));
}

int main()
{
    int t, k, n;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", getNum(k, n));
    }

    return 0;
}