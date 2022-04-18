#include <iostream>
#include <algorithm>

using namespace std;

int data[10000000] = {};

int main()
{
    int maximum_size = 0;
    scanf("%d", &maximum_size);

    for(int i = 0; i < maximum_size; i++)
    {
        scanf("%d", &data[i]);
    }

    sort(data, data+maximum_size);

    for(int i = 0; i < maximum_size; i++)
    {
        cout << data[i] << '\n';
    }

    return 0;
}

//Failed :: Compile error