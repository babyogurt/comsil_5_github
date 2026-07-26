#include <iostream>
using namespace std;

int Result(int n){
    if(n==0) return 0;
    return Result(n/10)+(n%10)*(n%10);
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    cout<<Result(n);
    return 0;
}