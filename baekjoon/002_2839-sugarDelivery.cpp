#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    int count = 0;

    scanf("%d", &input);

    if (input % 5 == 0)
    {
        count += input / 5;
    }
    else if(input % 5 % 3 == 0)
    {
        count += input / 5;
        count += input % 5 / 3;
    }
    else
    {
        int n = input / 5;
        while(n > -1)
        {
            int sugar = input;
            count = 0;

            count += n;
            sugar -= n * 5;
            
            if(sugar % 3 == 0)
            {
                count += sugar / 3;
                break;
            }
            else
            {
                count = -1;
                n--;
            }
        }
    }

    printf("%d", count);

    return 0;
}