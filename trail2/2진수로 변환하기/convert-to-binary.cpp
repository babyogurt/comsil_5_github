#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    string two;


    // Please write your code here.

    int t=0;
    if(n==0) {
        
        cout<<0;
        return 0;
    }
    while(n>0){
        
        two+=to_string(n%2);
        n/=2;
        t++;
    }

    for(int i=t-1;i>=0;i--){
        cout<<two[i];
    }

    return 0;
}