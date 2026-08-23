#include <iostream>
#include <climits>

using namespace std;

int N, H, T;
int arr[100];

int m=INT_MAX;

int main() {
    cin >> N >> H >> T;
    int cnt=0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    
    }

    for(int i=0;i<=N-T;i++){
        int cnt=0;
        for(int k=i;k<i+T;k++){
            cnt+=abs(arr[k]-H);
        }
        m=min(m,cnt);
    }

    cout<<m;





    // Please write your code here.

    return 0;
}