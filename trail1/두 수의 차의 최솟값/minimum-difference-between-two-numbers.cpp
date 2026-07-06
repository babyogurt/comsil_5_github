#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int arr[10];
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int min=99;

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            
        
            if(min>arr[j]-arr[i]){
                min=arr[j]-arr[i];
            }
            //else continue;
            
        }
    }
    cout<<min;
    return 0;
}