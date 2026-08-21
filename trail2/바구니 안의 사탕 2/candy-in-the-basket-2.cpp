#include <iostream>

using namespace std;

int N, K;
int candy[100], pos[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];
    }

    int m=0;
    
    for(int i=0;i<=100;i++){
        int sum=0;
        for(int j=0;j<N;j++){
            if(pos[j]>=i-K && pos[j]<=i+K){
                sum+=candy[j];
            }
            m=max(m,sum);
        }
    }

    cout<<m;

    // Please write your code here.

    return 0;
}