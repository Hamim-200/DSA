#include <bits/stdc++.h>
using namespace std;

int main()
{

    // For Multiple Value

    vector<int> v = {10, 20, 30, 40, 50};
    v.erase(v.begin() + 1, v.begin() + 3);
    for (int x : v)
    {
        cout << x << " ";
    }

    // FOR one value dELETE
    // vector<int> v={10,20,30,40,50};
    // v.erase(v.begin()+2);
    // for(int x:v){
    //     cout<<x<<" ";
    // }

    return 0;
}