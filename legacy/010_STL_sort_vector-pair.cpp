#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector<pair<int, string> > v;   //공백을 주어 비트연산자와는 다름을 명시.
    v.push_back(pair<int, string>(68, "3길동"));
    v.push_back(pair<int, string>(88, "4길동"));
    v.push_back(pair<int, string>(22, "1길동"));
    v.push_back(pair<int, string>(99, "5길동"));
    v.push_back(pair<int, string>(58, "2길동"));

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << ' ';
    }
    
    return 0;
}