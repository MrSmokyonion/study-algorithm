#include <stdio.h>

int main()
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    if((v-a) % (a-b) == 0)
    {
        printf("%d", (v-a)/(a-b)+1);
    }
    else
    {
        int day = v / (a-b);
        while(true)
        {
            if(day * (a-b) + a < v)
            {
                day += 2;
                break;
            }
            else{
                day--;
            }
        }
        printf("%d", day);
    }

    return 0;
}