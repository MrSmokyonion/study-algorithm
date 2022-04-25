#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 1, room = 1, temp = 6;
    while(true)
    {
        if(n <= room)
        break;

        count++;
        room += temp;
        temp += 6;
    }

    printf("%d", count);

    return 0;
}