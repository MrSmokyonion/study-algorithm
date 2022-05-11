#include <cstdio>   //iostream 으로 했었는데 시간초과 떴음..

int main()
{
    int m, n, arr[1000001] = {0};
    scanf("%d %d", &m, &n);

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
            printf("%d\n", i);
        }
    }

    return 0;
}