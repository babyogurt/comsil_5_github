#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,C;
    cin>>A>>B>>C;

    //int m=A;

    if(A>B && A>C){
        if(B>C){
            cout<<B;
        }
        else cout<<C;
    }
    else if(A<B && A<C){
        if(B>C){
            cout<<C;
        }
        else cout<<B;
    }
    else cout<<A;
    return 0;
}