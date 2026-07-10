#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    cout<<a/b<<".";

    int k=a%b;
    
    for(int i=0;i<20;i++){
        k*=10;
        cout<<k/b;
        k%=b;
    }
    

    return 0;
}