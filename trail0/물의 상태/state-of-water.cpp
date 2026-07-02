#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int d;
    cin>>d;

    if(d<0){
        cout<<"ice";
    }
    else if(d>=100){
        cout<<"vapor";
    }
    else cout<<"water";
    return 0;
}