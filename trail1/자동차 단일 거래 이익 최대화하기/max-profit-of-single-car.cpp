#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int arr[1000];
    

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    int dif=0;

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]<=arr[j]){
                if(dif<arr[j]-arr[i]){
                    dif=arr[j]-arr[i];
                }
            }
        }
    }
    cout<<dif;
    return 0;
}