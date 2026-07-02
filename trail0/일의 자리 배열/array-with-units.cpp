#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b;
    int A[10];

    cin>>A[0]>>A[1];


    for(int i=2;i<10;i++){
        A[i]=(A[i-1]+A[i-2])%10;

    }

    for(int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}