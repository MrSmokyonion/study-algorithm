#include <stdio.h>
#define MAXIMUM_DATA_SIZE 8

int sorted[MAXIMUM_DATA_SIZE]; // merge() 내에서 정렬하면서 들어갈 배열

void merge(int *arr, int start, int end, int middle_index)
{
    int i = start;
    int j = middle_index + 1;
    int k = start;

    //부분 집합 두개를 하나의 배열로 정렬. (오름차순)
    while (i <= middle_index && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            sorted[k] = arr[i];
            i++;
        }
        else
        {
            sorted[k] = arr[j];
            j++;
        }
        k++;
    }

    //위 코드로 시행한 후에 남아있는 한쪽 부분 집합의 데이터들을 정렬.
    if (i <= middle_index)
    {
        for (int t = i; t <= middle_index; t++)
        {
            sorted[k] = arr[t];
            k++;
        }
    }
    else
    {
        for (int t = j; t <= end; t++)
        {
            sorted[k] = arr[t];
            k++;
        }
    }

    //정렬을 마친 배열을 기존의 배열에 적용
    for (int t = start; t <= end; t++)
    {
        arr[t] = sorted[t];
    }
}

void merge_sort(int *arr, int start, int end)
{
    if (start < end) //배열 크기가 1이면 false하도록
    {
        int middle_index = (start + end) / 2;
        merge_sort(arr, start, middle_index);   //절반 나눠서 왼쪽배열
        merge_sort(arr, middle_index + 1, end); //절반 나눠서 오른쪽배열
        merge(arr, start, end, middle_index);   //정렬
    }
}

int main()
{
    int data[MAXIMUM_DATA_SIZE] = {7, 6, 5, 8, 3, 5, 9, 1};
    merge_sort(data, 0, MAXIMUM_DATA_SIZE - 1);
    for (int i = 0; i < MAXIMUM_DATA_SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}