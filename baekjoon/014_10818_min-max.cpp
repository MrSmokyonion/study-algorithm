#include <stdio.h>

int main()
{
    int n, min = 1000001, max = -1000001;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);

        if(min > temp)
        {
            min = temp;
        }
        if(max < temp)
        {
            max = temp;
        }
    }

    printf("%d %d", min, max);

    return 0;
}