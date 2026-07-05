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

    int min=0;

    for(int i=0;i<N;i++){
        if(arr[min]>arr[i]){
            min=i;
        }
    }

    int cnt=0;

    for(int i=0;i<N;i++){
        if(arr[min]==arr[i]) cnt++;
    }

    cout<<arr[min]<<" "<<cnt;
    return 0;
}