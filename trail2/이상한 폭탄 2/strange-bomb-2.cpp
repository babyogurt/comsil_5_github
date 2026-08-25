#include <iostream>
#include <cmath>

using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    int m=-1;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j) continue;

            else if(num[i]==num[j] && abs(i-j)<=K){
                m=max(m,num[i]);
            }
        }
    }

    cout<<m;

    // Please write your code here.

    return 0;
}