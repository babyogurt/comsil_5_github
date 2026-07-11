#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int mul=1;

    for(int i=a;i<=b;i++){
        mul*=i;
    }
    cout<<mul;
    return 0;
}