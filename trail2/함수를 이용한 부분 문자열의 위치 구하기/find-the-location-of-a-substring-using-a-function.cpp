#include <iostream>
using namespace std;

string A,B;

int Index(int n,int m){
    for(int i=0;i<n-m+1;i++){
        if(A.substr(i,m)==B){
            return i;
        }
    }
    return -1;
    
}

int main() {
    // Please write your code here.
    
    cin>>A>>B;

    int N=A.length();
    int M=B.length();

    cout<<Index(N,M);



    return 0;
}