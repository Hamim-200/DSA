// The time complexity O(log𝑛) pronounced big-O of log n, represents an algorithm whose performance grows logarithmically in relation to the size of the input 𝑛.If the input size increases, the number of operations required grows much slower compared to linear time O(n)


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    while(n>0){ //-----O(logN)
        int digit = n%10;
        cout<<digit<<endl;
        n/=10;
    }
    return 0;
}