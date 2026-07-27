#include <iostream>
using namespace std;

int g(int n){
    if(n/10==0) return n;

    return g(n/10)+n%10;
}

int f(int a,int b,int c){
    int mul=a*b*c;

    return g(mul);
}

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;

    cout<<f(a,b,c);
    return 0;
}