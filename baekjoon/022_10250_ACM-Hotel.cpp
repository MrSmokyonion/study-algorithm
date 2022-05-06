#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t, h, w, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        int room_number = 1, room_height;

        room_number += n / h;
        room_height = n % h;

        if (n % h == 0)
        {
            room_number--;
            room_height = h;
        }

        cout << setfill('0');
        cout << room_height << setw(2) << room_number << endl;
    }

    return 0;
}