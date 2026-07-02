#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int s,n;
    cin>>s>>n;

    if(s==0){
        if(n>=19){
            cout<<"MAN";
        }
        else cout<<"BOY";
    }
    else {
        if(n>=19){
            cout<<"WOMAN";
        }
        else cout<<"GIRL";
    }

    return 0;
}