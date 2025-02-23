#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Returns the maximum size that the vector can hold.
    list<int> myList = {10, 20, 30};
    cout<<myList.max_size();

    // Clears the list elements. Do not delete the memory, only clear the list.
    list<int> myList = {10, 20, 30};
    myList.clear();

    // Change the size of the list.
    list<int> myList = {10, 20, 30};
    myList.resize(2);
    cout<<myList.size()<<endl;

    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}
