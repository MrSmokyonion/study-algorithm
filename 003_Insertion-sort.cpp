#include <cstdio>
#define MAXIMUM_ARRAY_SIZE 10

int main()
{
    int i, j, temp; //순환변수 i와 j, 데이터 스왑용 temp
    int data[MAXIMUM_ARRAY_SIZE] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for (i = 0; i < MAXIMUM_ARRAY_SIZE - 1; i++)
    {
        j = i;                                  //출발지점 지정
        while (j >= 0 && data[j] > data[j + 1]) //순환변수 j가 목적지(맨 앞)에 도착했는가 && 데이터 비교
        {
            temp = data[j];
            data[j] = data[j + 1];
            data[j + 1] = temp;
            j--; //앞을 향해서 나아가기 때문에 감산
        }

        //각 사이클마다 정렬되는 모습을 보기위한 코드
        /*
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", data[k]);
        }
        printf("\n");
        */
    }

    for (i = 0; i < MAXIMUM_ARRAY_SIZE; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}