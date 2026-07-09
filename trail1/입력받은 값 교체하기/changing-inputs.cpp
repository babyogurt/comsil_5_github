#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int tmp=a;
    a=b;
    b=tmp;
    cout<<a<<" "<<b;
    return 0;
}