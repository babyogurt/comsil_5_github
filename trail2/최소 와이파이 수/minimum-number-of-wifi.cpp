#include <iostream>

using namespace std;

int n, m;
int arr[101];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    int cnt=0;

    for(int i=0;i<n;){
        if(arr[i]==0) i++;
        else {
            cnt++;
            i+=2*m+1;
            
        }
    }

    cout<<cnt;

    return 0;
}