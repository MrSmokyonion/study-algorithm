#include <cstdio>

int main()
{
    int m, n, sum = 0, min = 10001;
    scanf("%d %d", &m, &n);

    int arr[10001] = {0};
    arr[0] = arr[1] = 1;    //1은 소수가 아니다를 안말해줬었네..

    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; i*j <= n; j++)
        {
            arr[i*j] = 1;
        }
    }

    for(int i = m; i <= n; i++)
    {
        if(arr[i] == 0)
        {
            sum += i;
            if(i < min)
            {
                min = i;
            }
        }
    }
    
    if(sum == 0)
    {
        printf("-1");
        return 0;
    }
    printf("%d\n%d", sum, min);

    return 0;
}