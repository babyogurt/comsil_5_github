#include <iostream>
using namespace std;

int F(int n){
    if(n==1) return 1;
    if(n==2) return 1;

    return F(n-2)+F(n-1);
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    cout<<F(n);
    return 0;
}