#include <iostream>
using namespace std;

int P(int n){
    if(n==1) return 1;
    return P(n-1)*n;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    cout<<P(n);
    return 0;
}