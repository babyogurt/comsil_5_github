#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt=0;
    int m=0;

    for(int i=0;i<n;i++){
        if(arr[i]>t){
            cnt++;
            if(cnt>m) m=cnt;
        }
        else cnt=0;
    }

    cout<<m;

    // Please write your code here.

    return 0;
}