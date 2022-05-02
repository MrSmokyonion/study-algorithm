#include <stdio.h>

int main()
{
    for(int n = 1; n <= 10000; n++)
    {
        for(int i = 1; i <= n; i++)
        {
            int temp = i;
            int add = 0;
            add += temp%10;
            if(temp >= 10)
            {
                add += temp / 10 % 10;
            }
            if(temp >= 100)
            {
                add += temp / 100 % 10;
            }
            if(temp >= 1000)
            {
                add += temp / 1000 % 10;
            }
            if(temp >= 10000)
            {
                add += temp / 10000 % 10;
            }
            temp += add;

            if(n == temp)
            {
                break;
            }
            else if(i == n)
            {
                printf("%d\n", n);
            }
        }
    }

    return 0;
}