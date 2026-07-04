#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int arr[100];

    int cnt=0;

    cin>>N;

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=0;i<N;i++){
        if(arr[i]==2) {cnt++;}

        if(cnt==3){
            cout<<i+1; break;
        }
    }

    
    return 0;
}