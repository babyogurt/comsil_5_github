#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
        arr[i]*=arr[i];

        cout<<arr[i]<<" ";
    }




    return 0;
}