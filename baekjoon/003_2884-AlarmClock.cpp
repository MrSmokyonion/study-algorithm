#include <stdio.h>

using namespace std;

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);

    int result = (h * 60 + m) - 45;

    if(result < 0)
    {
        printf("%d %d", 23, 60+result);
    }
    else
    {
        printf("%d %d", result/60, result%60);
    }

    return 0;
}