#include <iostream>

using namespace std;

int N;

int f(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    else return f(n/3)+f(n-1);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout<<f(N);

    return 0;
}