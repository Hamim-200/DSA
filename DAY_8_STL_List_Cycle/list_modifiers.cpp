#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Assign another list.

    list<int> myList = {10, 20, 30};
    list<int> newList;
    newList = myList;
    newList.assign(myList.begin(),myList.end());

    for(int val: newList){
        cout<<val<<endl;
    }

    // PUSH BACK
    list<int> mylist = {10, 20, 30,40,50};
    mylist.push_back(100);
    mylist.push_front(200);

    mylist.pop_back();
    mylist.pop_front();

    mylist.insert(next(mylist.begin(),2),100);
    mylist.erase(next(mylist.begin(),2));

    for (int val : mylist)
    {
        cout << val << endl;
    }

    return 0;
}
