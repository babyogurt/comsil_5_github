#include <iostream>
using namespace std;

int Result(int n){
    if(n==1) return 1;
    return Result(n-1)+n;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    cout<<Result(n);
    return 0;
}