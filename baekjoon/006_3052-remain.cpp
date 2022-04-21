#include <stdio.h>

int main()
{
    int remain[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int count = 0;
    for(int i = 0; i < 10; i++)
    {
        int temp;
        scanf("%d", &temp);
        temp = temp % 42;

        int j = -1;
        while(true)
        {   
            j++;
            if(remain[j] == -1)
            {
                remain[j] = temp;
                count++;
                break;
            }
            else if(remain[j] == temp)
            {
                break;
            }
            else
            {
                continue;
            }
        }
    }

    printf("%d", count);



    return 0;
}