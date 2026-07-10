#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int i=a;

    while(i<=b){
        if(i%2==1){
            
            cout<<i<<" ";
            i*=2;
        }
        else{
            
            cout<<i<<" ";
            i+=3;
        }
    }
    return 0;
}