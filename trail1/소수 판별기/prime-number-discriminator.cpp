#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    bool k=false;

    for(int i=2;i<n;i++){
        if(n%i==0){
            k=true;
        }
    }

    if(k==false) cout<<"P";
    else cout<<"C";
    return 0;
}