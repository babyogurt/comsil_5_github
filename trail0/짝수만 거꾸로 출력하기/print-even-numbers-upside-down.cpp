#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }

    for(int i=N-1;i>=0;i--){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}