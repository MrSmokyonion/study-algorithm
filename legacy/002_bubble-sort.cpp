#include <cstdio>
#define MAXIMUM_ARRAY_SIZE 10

int main()
{
    int i, j, temp;
    int data[MAXIMUM_ARRAY_SIZE] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for (i = 0; i < MAXIMUM_ARRAY_SIZE; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < MAXIMUM_ARRAY_SIZE; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}