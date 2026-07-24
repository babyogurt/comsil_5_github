#include <iostream>
using namespace std;

void Absol(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<0) arr[i]*=(-1);
    }
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int arr[50];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Absol(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}