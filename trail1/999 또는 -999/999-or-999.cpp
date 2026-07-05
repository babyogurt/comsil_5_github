#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int i=0;

    while(arr[i-1]!=999 && arr[i-1]!=-999){
        cin>>arr[i];
        i++;

        //cout<<i<<" ";
    }
    int max=0,min=0;
    //cout<<i;

    for(int j=0;j<i-1;j++){
        if(arr[max]<arr[j]){
            max=j;
        }
        if(arr[min]>arr[j]){
            min=j;
        }
    }

    cout<<arr[max]<<" "<<arr[min];

    return 0;
}