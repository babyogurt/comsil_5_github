#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int arr[101];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m=0;

    for(int i=0;i<n-2;i++){
        for(int j=i+2;j<n;j++){
            m=max(arr[i]+arr[j],m);
        }
    }

    cout<<m;
    return 0;
}