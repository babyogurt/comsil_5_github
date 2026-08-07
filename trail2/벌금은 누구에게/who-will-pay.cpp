#include <iostream>

using namespace std;

int N, M, K;
int student[10000];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    int num[100]={};

    for(int i=0;i<M;i++){
        num[student[i]]++;

        for(int j=0;j<N;j++){
        if(num[j]>=K){
            cout<<j;
            return 0;
        }
    }
    }
    cout<<"-1";

    

    // Please write your code here.

    return 0;
}