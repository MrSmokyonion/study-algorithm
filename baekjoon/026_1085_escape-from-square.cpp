#include <stdio.h>

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int ans_x = (w/2) >= x ? x : w-x; 
    int ans_y = (h/2) >= y ? y : h-y;

    printf("%d", ans_x < ans_y ? ans_x : ans_y);

    return 0;
}