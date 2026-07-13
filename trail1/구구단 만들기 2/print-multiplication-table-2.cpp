#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    for(int j=1;j<=4;j++){
        for(int i=b;i>=a;i--){
            cout<<i<<" * "<<j*2<<" = "<<i*j*2;
            if(i!=a) cout<<" / ";
        }
        cout<<endl;
    }
    
    return 0;
}