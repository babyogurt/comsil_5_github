#include <iostream>
using namespace std;
int F(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return F(n-2)+n;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    cout<<F(n);
    return 0;
}