#include <stdio.h>
#include <algorithm>

// https://www.acmicpc.net/problem/2751

int data[1000000];

int main()
{
    int data_size;
    scanf("%d", &data_size);

    for (int i = 0; i < data_size; i++)
    {
        scanf("%d", &data[i]);
    }

    std::sort(data, data + data_size);

    for (int i = 0; i < data_size; i++)
    {
        printf("%d\n", data[i]);
    }

    return 0;
}