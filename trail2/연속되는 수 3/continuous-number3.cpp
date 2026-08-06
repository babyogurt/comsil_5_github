#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int arr[1000];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cnt=0;
    int max=0;


    for(int i=1;i<n;i++){
        if(arr[i]*arr[i-1]>0){
            cnt++;
            if(cnt>max) max=cnt;
        }
        else cnt=0;
    }

    cout<<max+1;
    return 0;
}