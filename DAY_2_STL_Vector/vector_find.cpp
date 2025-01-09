#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 3, 234, 43, 4, 234, 2, 42, 12};
    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 99);
    // cout<<*it;

    auto it = find(v.begin(), v.end(), 234);
    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}