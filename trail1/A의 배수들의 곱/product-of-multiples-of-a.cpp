#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int mul=1;

    for(int i=1;i<=b;i++){
        if(i%a==0) mul*=i;
    }
    cout<<mul;
    return 0;
}