#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int arr[100];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    //int max=0;

    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(arr[i]<arr[j]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;

            }
        }
        
    }

    cout<<arr[0]<<" "<<arr[1];
    return 0;
}