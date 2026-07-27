#include <iostream>
using namespace std;

int m(int a,int b){
    int l;
    for(int i=1;i<=a;i++){
        if((a%i==0)&&(b%i==0)){
            l=i;
        }
    }
    return l;
}
int g(int a,int b){
    return a*b/m(a,b);
}

int f(int n){
    int k;
    cin>>k;
    if(n==1) return k;
    else return g(f(n-1),k);
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    cout<<f(n);
    return 0;
}