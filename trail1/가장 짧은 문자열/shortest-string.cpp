#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a,b,c;

    cin>>a>>b>>c;

    int A,B,C;

    A=a.length();
    B=b.length();
    C=c.length();

    if(A>B && A>C){
        if(B>C) cout<<A-C;
        else cout<<A-B;
    }
    else if(B>A && B>C){
        if(A>C) cout<<B-C;
        else cout<<B-A;
    }
    else{
        if(B>A) cout<<C-A;
        else cout<<C-B;
    }
    
    return 0;
}