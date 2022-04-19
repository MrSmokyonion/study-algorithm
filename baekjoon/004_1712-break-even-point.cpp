#include <stdio.h>

int main()
{
    //고정비용, 가변비용, 노트북 가격
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(b >= c)
    {
        printf("-1");
        return 0;
    }

    printf("%d", (a / (c - b))+1);

    return 0;
}