#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int max=0,min=1000;

    for(int i=0;i<10;i++){
        if(arr[i]<500){
            if(max<arr[i]){
                max=arr[i];
            }
            else continue;
        }
        else {
            if(min>arr[i]){
                min=arr[i];
            }
            else continue;
        }
    }
    cout<<max<<" "<<min;
    return 0;
}