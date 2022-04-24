#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        
        if(temp == 1)
        {
            continue;
        }
        count++;
        for (int j = 2; j < temp; j++)
        {
            if (temp % j == 0)
            {
                count--;
                break;
            }
        }
    }

    printf("%d", count);

    return 0;
}