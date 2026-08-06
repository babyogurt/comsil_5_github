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
    
    int cnt=1;
    int max=1;

    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]) cnt++;
        else cnt=1;
        
        if(cnt>max) max=cnt;

    } 

    cout<<max;
    return 0;
}