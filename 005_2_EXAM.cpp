#include <stdio.h>

// https://www.acmicpc.net/problem/2750

int data[1000];

int main()
{
    int data_size;
    scanf("%d", &data_size);

    for (int i = 0; i < data_size; i++)
    {
        scanf("%d", &data[i]);
    }

    int min, temp, index;
    for (int i = 0; i < data_size; i++)
    {
        min = 1001;
        for (int j = i; j < data_size; j++)
        {
            if (min > data[j])
            {
                min = data[j];
                index = j;
            }
        }

        temp = data[i];
        data[i] = data[index];
        data[index] = temp;
    }

    for (int i = 0; i < data_size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}