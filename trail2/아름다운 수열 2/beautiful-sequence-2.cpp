#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int A[100], B[100];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++) cin >> B[i];

    // Please write your code here.
    int cnt=0; 
    
    int sortedB[100];
    for(int i=0;i<M;i++){
        sortedB[i]=B[i];
    }
    sort(sortedB,sortedB+M);

    for(int i=0;i<=N-M;i++){
        int temp[100];
        for(int k=0;k<M;k++){
            temp[k]=A[i+k];
        }
        sort(temp,temp+M);

        bool match =true;
        for(int k=0;k<M;k++){
            if(temp[k]!=sortedB[k]){
                match=false;
                break;
            }
        }
        if(match) cnt++;
    }
    cout<<cnt;


    return 0;
}