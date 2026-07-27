#include <iostream>

using namespace std;

int N;

int f(int N){
    if(N==1) return 2;
    if(N==2) return 4;
    else return (f(N-1)*f(N-2))%100;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout<<f(N);

    return 0;
}