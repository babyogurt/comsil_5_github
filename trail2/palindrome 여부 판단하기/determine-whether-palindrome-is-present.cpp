#include <iostream>
#include <string>

using namespace std;

string A;

bool Pali(){

    int len=A.length();
    string B;
    for(int i=len-1;i>=0;i--){
        B+=A[i];
    }

    for(int i=0;i<len;i++){
        if(A[i]!=B[i]) return false;
    }
    return true;
}

int main() {
    cin >> A;

    // Please write your code here.
    if(Pali()) cout<<"Yes";
    else cout<<"No";

    return 0;
}