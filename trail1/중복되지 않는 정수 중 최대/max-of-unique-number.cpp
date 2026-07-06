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

    int k=-1;

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                k=arr[i];
                for(int p=0;p<N;p++){
                    if(arr[p]==k){
                        arr[p]=0;
                    }
                }
            break;
            }
        }
    }
    int max=0;
    for(int i=0;i<N;i++){
        if(arr[max]<arr[i]){
            int tmp=arr[max];
            arr[max]=arr[i];
            arr[i]=tmp;
        }
    }
    if(arr[max]==0){
        cout<<"-1";
        return 0;
    }
    cout<<arr[max];
    return 0;
}