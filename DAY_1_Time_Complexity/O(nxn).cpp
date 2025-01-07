// O(N*N) Time Complexity represents an algorithm whose performance grows quadratically with the size of the input N. This means that as the input size N increases, the number of operations required increases proportionally to N^2.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){ //-----O(N*N)
       for(int j=1;j<=n;j++){
        cout<<"Hello"<<endl;
       }
    }
    return 0;
}