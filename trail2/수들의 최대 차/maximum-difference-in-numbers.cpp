#include <iostream>

using namespace std;

int N, K;
int arr[1000];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    int m=0;

    for(int i=0;i<N;i++){
        int cnt=0;

        for(int j=0;j<N;j++){
            if(arr[i]-arr[j]<=K && arr[i]-arr[j]>=0){
                cnt++;
            }
        }

        m=max(m,cnt);

    }

    cout<<m;

    return 0;
}