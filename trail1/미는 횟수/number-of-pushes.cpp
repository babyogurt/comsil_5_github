#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a,b,A;

    int n=0;

    cin>>a>>b;

    int len=a.length();

    bool k=false;

    for(int i=0;i<a.length();i++){
        A=a.substr(len-1,1)+a.substr(0,len-1);
        n++;
        
        if(A==b) {
            cout<<n;
            k=true;
            break;
        }
    a=A;
    }
    if(k==false) cout<<"-1";


    return 0;
}