#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int cnt=0;
    

    int arr[N];
    int brr[cnt]={};

    for(int i=0;i<N;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            cnt++;
            brr[cnt]=arr[i];

            cout<<brr[cnt]<<" ";
        }
    }
    return 0;
}