#include <stdio.h>

int Get_Least_Common_Multiple(int a, int b)
{
    int c = a % b;
    while(c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int Get_Greatest_Common_Factor(int a, int b)
{
    return (a * b) / Get_Least_Common_Multiple(a, b);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    //y가 더 작은 수
    if(x < y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("%d\n", Get_Least_Common_Multiple(x, y));
    printf("%d\n", Get_Greatest_Common_Factor(x, y));

    return 0;
}
//https://sectumsempra.tistory.com/77