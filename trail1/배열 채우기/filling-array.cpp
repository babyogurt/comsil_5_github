#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int arr[1000];

    int i=0;

    while(true){
        
        cin>>arr[i];
            
        if(arr[i]==0){
            break;
        }
        i++; 
    }

    for(int j=i-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }

    return 0;
}