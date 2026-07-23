#include <iostream>

using namespace std;

int N;

int Tot(int n){

    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum/10;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout<<Tot(N);


    return 0;
}