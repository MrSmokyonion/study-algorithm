#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a)
{
    long long ans = 0;

    for(int i = 0; i < a.size(); i++)
    {
        ans += a[i];
    }

    return ans;
}

int main()
{
    vector<int> a;

    int temp;
    while(!(cin >> temp).eof())
    {
        a.push_back(temp);
    }
    
    sum(a);

    return 0;
}