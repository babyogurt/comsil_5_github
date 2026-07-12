#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    bool k=true;

    int a;

    for(int i=0;i<5;i++){
        cin>>a;
        if(a%3!=0) k=false;
    }
    if(k) cout<<true;
    else cout<<false;
    return 0;
}