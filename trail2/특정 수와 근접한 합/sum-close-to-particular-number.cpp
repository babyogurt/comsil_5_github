#include <iostream>
#include <climits>

using namespace std;

int main() {
    // Please write your code here.
    int s,n;
    cin>>n>>s;

    int arr[101];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int m=INT_MAX;

    int d;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            d=abs(sum-arr[i]-arr[j]-s);
            m=min(d,m);
            
        }
    }

    cout<<m;
    return 0;
}