#include <iostream>
using namespace std;

int main()
{
    int d1, d2, d3, total = 0;
    cin >> d1 >> d2 >> d3;

    if(d1 == d2 && d2 == d3)
    {
        total = 10000 + (d1 * 1000);
    }
    else if((d1 == d2) || (d2 == d3) || (d1 == d3))
    {
        d1 = d1 == d2 ? d2 : d3;
        total = 1000 + (d1 * 100);
    }
    else
    {
        d1 = d1 < d2 ? d2 : d1;
        d1 = d1 < d3 ? d3 : d1;
        total = d1 * 100;
    }

    cout << total;

    return 0;
}