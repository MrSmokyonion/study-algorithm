#include <cstdio>
#define MAXIMUM_ARRAY_SIZE 10

int main()
{
    //변수 초기화
    int min = 9999; //최소값을 담는 변수
    int temp = 0;   //값 스왑을 위한 임시변수
    int index = -1; //선택된 데이터의 좌표를 저장.
    int data[MAXIMUM_ARRAY_SIZE] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for (int i = 0; i < MAXIMUM_ARRAY_SIZE; i++)
    {
        min = 9999; //최소값 초기화
        for (int j = i; j < MAXIMUM_ARRAY_SIZE; j++)
        {
            if (min > data[j])  //해당 데이터는 최소값인가?
            {
                min = data[j];
                index = j;
            }
        }

        //값 스왑
        temp = data[i];
        data[i] = data[index];
        data[index] = temp;
    }

    //출력
    for (int i = 0; i < MAXIMUM_ARRAY_SIZE; i++)
    {
        printf("%d", data[i]);
        if (i == MAXIMUM_ARRAY_SIZE - 1)
            break;
        printf(", ");
    }

    return 0;
}