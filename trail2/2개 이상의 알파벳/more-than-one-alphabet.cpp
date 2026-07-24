#include <iostream>
using namespace std;

bool Check(string &A,int n){

    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i]==A[j]) cnt++;
        }
        if(cnt==n) return false;;
        cnt=0;
    }
    return true;
}

int main() {
    // Please write your code here.
    string A;
    cin>>A;

    if(Check(A,A.length())) cout<<"Yes";
    else cout<<"No";
    return 0;
}