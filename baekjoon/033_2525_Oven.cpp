#include <iostream>
using namespace std;

int main()
{
    int h, m, cook;
    cin >> h >> m;
    cin >> cook;

    m = h * 60 + m + cook;
    h = m/60 >= 24 ? m/60 - 24 : m/60;
    cout << h << ' ' << m%60;

    return 0;
}