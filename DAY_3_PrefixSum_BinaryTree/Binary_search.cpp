#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "Found" << endl;
        else
            cout << "Not Found";
    }

    return 0;
}