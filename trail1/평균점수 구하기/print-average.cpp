#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    float arr[8];

    for(int i=0;i<8;i++){
        cin>>arr[i];
    }

    //float m=0;
    float s=0;

    for(int i=0;i<8;i++){
        s+=arr[i];
    }

    float m=s/8;    
    
    cout<<fixed;
    cout.precision(1);
    cout<<m;

    return 0;
}