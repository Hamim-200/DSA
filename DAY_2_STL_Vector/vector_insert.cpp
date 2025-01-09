#include <bits/stdc++.h>
using namespace std;

int main()
{

    // For Multiple Value

    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v2 = {100, 200, 300, 400, 500};
    v.insert(v.begin() + 2, v2.begin(), v2.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    // FOR one value insert
    // vector<int> v={10,20,30,40,50};
    // v.insert(v.begin()+2,29);
    // for(int x:v){
    //     cout<<x<<" ";
    // }

    return 0;
}