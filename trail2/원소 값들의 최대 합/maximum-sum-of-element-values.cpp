#include <iostream>

using namespace std;

int n, m;
int arr[101];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int M=0;

    for(int i=0;i<n;i++){
        int a=i+1;
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[a];
            a=arr[a];
        }
        M=max(M,sum);
    }

    cout<<M;

    return 0;
}