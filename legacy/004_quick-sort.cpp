#include <stdio.h>
#define MAXIMUM_ARRAY_SIZE 10

int data[] = {3, 7, 8, 1, 5, 9, 6, 10, 2, 4};

void show_data()
{
    for (int i = 0; i < MAXIMUM_ARRAY_SIZE; i++)
    {
        printf("%d ", data[i]);
    }
}

void quick_sort(int *_data, int _start, int _end)
{
    if (_start >= _end)
    {
        return;
    }

    int key = _start;
    int i = _start + 1, j = _end, temp = 0;

    while (i <= j) //키 값이 엇갈릴때까지 반복.
    {
        while (i <= _end && _data[i] <= _data[key]) //(->) 키값보다 큰 값.
        {
            i++;
        }
        while (j > _start && _data[j] >= _data[key]) //(<-) 키값보다 작은 값.
        {
            j--;
        }

        if (i > j) //키 값이 엇갈렸는가? 맞다면 키값교환
        {
            temp = _data[key];
            _data[key] = _data[j];
            _data[j] = temp;
        }
        else //키 값이 엇갈리지 않았기에 i값 j값 교환
        {
            temp = _data[i];
            _data[i] = _data[j];
            _data[j] = temp;
        }
    }

    quick_sort(_data, _start, j - 1);
    quick_sort(_data, j + 1, _end);
}

int main()
{
    quick_sort(data, 0, MAXIMUM_ARRAY_SIZE - 1);
    show_data();
    return 0;
}