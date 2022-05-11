#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int i = 1;
    while(true)
    {
        if(x > i)
        {
            x -= i;
            i++;
            continue;
        }

        if(i % 2 == 0)
        {
            printf("%d/%d", x, i-x+1);
        }
        else
        {
            printf("%d/%d", i-x+1, x);
        }
        break;
    }

    return 0;
}