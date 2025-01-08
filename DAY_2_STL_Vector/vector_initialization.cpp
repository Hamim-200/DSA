#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // TYPE-1 
    // vector<int> v(5); TYPE-2
    // vector<int> v(5,10); TYPE-3

    // vector<int>v2(5,100);
    // vector<int>v3(v2); TYPE-4

    // int a[6] = {1,2,3,4,5,6};
    // vector<int> v(a,a+6);  TYPE-5

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    return 0;
}