#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n,k;
    cin>>n>>k;

    int arr[101];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    int m=INT_MIN;

    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        m=max(m,sum);
    }
    cout<<m;
    return 0;
}