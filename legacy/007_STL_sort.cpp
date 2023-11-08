#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[10] = {10, 9, 6, 5, 8, 2, 7, 3, 4, 1};

    sort(arr, arr + 10);

    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}