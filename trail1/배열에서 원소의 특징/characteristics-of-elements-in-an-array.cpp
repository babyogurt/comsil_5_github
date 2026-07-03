#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];

    for(int i=0;i<10;i++){
        cin>>a[i];
    }

    for(int i=0;i<10;i++){
        if(a[i]%3==0){
            cout<<a[i-1];
            break;
        }
    }
    return 0;
}