#include <stdio.h>

int main()
{
    while (true)
    {
        unsigned int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if(a == 0 && b == 0 && c == 0)
        {
            break;
        }

        if(a > c && a > b)
        {
            int temp = a;
            a = c;
            c = temp;
        } else if (b > c && b > a)
        {
            int temp = b;
            b = c;
            c = temp;
        }

        if ((a * a + b * b) == c * c)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }

    return 0;
}