#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m,n;
    cin>>m;

    for(int i=0;i<m;i++){
    cin>>n;
    int cnt=0;

    while(n!=1){
        if(n%2==0) n=n/2;
        else n=3*n+1;

        cnt++;

    }
    cout<<cnt<<endl;
    }
    return 0;
}