#include <iostream>

using namespace std;

int score[1000] = {0};

int main() 
{
    int c;  //테스트케이스 개수
    scanf("%d", &c);

    for(int i = 0; i < c; i++)
    {
        int n;
        scanf("%d", &n);

        int total = 0;
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
            total += score[j];
        }

        int avg = total / n;
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(score[j] > avg)
                count++;
        }

        printf("%.3f%%\n", (float)count/n*100);
    }

    return 0;
}