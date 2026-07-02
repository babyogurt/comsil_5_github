#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char A[10];

    for(int i=0;i<10;i++){
        cin>>A[i];
    }
    
    for(int i=9;i>=0;i--){
        cout<<A[i];
    }
    return 0;
}