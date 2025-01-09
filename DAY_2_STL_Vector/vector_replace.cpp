#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50,3,234,43,4,234,2,42,12};
    replace(v.begin(),v.end(),234,99);
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}