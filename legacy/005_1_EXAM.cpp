#include <stdio.h>

//https://www.acmicpc.net/problem/2752

int data[3] = {0};

int main()
{
    int i, j, temp, min, index;

    //데이터 입력
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &data[i]);
    }

    //정렬
    for(i = 0; i<3; i++)
    {
        min = 1000001;
        for(j = i; j<3; j++)
        {
            if(min > data[j])
            {
                min = data[j];
                index = j;
            }
        }
        
        temp = data[index];
        data[index] = data[i];
        data[i] = temp;
    }

    //데이터 출력
    for(i = 0; i < 3; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}