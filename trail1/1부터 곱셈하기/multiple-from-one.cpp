#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int mul=1;

    for(int i=1;i<=10;i++){
        mul*=i;
        if(mul>=n){
            cout<<i; break;
        }
    }
    return 0;
}