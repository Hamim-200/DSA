#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 3, 234, 43, 4, 234, 2, 42, 12};
    // cout<<v[v.size()-1];
    // cout<<v.back();

    // cout<<v[0];
    // cout<<v.front();

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}