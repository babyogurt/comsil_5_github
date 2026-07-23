#include <iostream>
using namespace std;

bool Prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

bool Even(int n){

    int sum=0;

    while(n>0){
        sum+=n%10;
        n/=10;
    }

    if(sum%2==0) return 1;
    else return 0;
}

int Count(int a,int b){

    int cnt=0;

    for(int i=a;i<=b;i++){
        if(Prime(i) && Even(i)) cnt++;
    }
    return cnt;
}

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    cout<<Count(a,b);
    return 0;
}