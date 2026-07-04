#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin>>N;

    int arr[100]={1,N,};

    for(int i=2;i<100;i++){
        arr[i]=arr[i-1]+arr[i-2];

        
    }

    for(int i=0;i<100;i++){
        if(arr[i-1]>100) break;
        cout<<arr[i]<<" ";
    }
    return 0;
}