#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[10] = {2, 6, 5, 7, 9, 1, 3, 4, 8, 10};

    sort(arr, arr + 10, compare);

    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
}