#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Construct a list with 0 elements
    list<int> mylist;

    // Construct a list with N elements and the value will be garbage.
    list<int> mylist1(10);

    cout << mylist.size();
    cout << mylist1.size();

    // Construct a list with N elements and the value will be V.
    list<int> myList(10, 5);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << endl;
    }

    // Construct a list by copying another list list2.
    list<int> list2 = {1, 2, 3, 4, 5};
    list<int> myList(list2);

    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << endl;
    }

    // Construct a list by copying all elements from an array A of size N.
    int a[5] = {10, 20, 30, 40, 50};
    list<int> myList(a, a + 5);

    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
