#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;
    cin>>a>>b;

    string A,B;

    for(int i=0;i<a.length();i++){
        if(isdigit(a[i])) A+=a[i];
    }

    for(int i=0;i<b.length();i++){
        if(isdigit(b[i])) B+=b[i];
    }
    cout<<stoi(A)+stoi(B);
    return 0;
}