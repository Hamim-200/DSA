// O(sqrt(N)) time complexity represents an algorithm where the number of operations grows proportionally to the square root of the input size 𝑁. This is slower than O(logN) but faster than O(N).

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)// O(sqrt(N))
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
                cout << n / i << endl;
        }
    }
    return 0;
}