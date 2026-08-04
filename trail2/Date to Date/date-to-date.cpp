#include <iostream>
using namespace std;

int day(int a,int b){
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d=0;
    for(int i=0;i<a-1;i++){
        d+=mon[i];
    }
    d+=b;

    return d;
}

int main() {
    // Please write your code here.
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    cout<<day(c,d)-day(a,b)+1;
    return 0;
}