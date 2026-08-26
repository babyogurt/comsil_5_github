#include <iostream>

using namespace std;

int X, Y;

int EPS(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main() {
    cin >> X >> Y;

    // Please write your code here.

    int m=0;

    for(int i=X;i<=Y;i++){
        
        m=max(m,EPS(i));
    }

    cout<<m;

    return 0;
}