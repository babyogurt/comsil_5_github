#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    
    if(n>=90){
        if(m>=95){
            cout<<"100000";
        }
        else if(m>=90){
            cout<<"50000";
        }
        else cout<<"0";
    }
    else cout<<"0";
    
    return 0;
}