#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    int max=0;

    for(int i=0;i<10;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }

    cout<<arr[max];
    return 0;
}