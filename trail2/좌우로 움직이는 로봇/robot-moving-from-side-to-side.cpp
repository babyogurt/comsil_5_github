#include <iostream>

using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b[i] >> d_b[i];
    }


    int A[2000001]={};
    int timea=1;

    int B[2000001]={};
    int timeb=1;


    for(int i=0;i<n;i++){
        if(d[i]=='R'){
            while(t[i]--){
                A[timea]=A[timea-1]+1;
                timea++;

            }
        }
        else if(d[i]=='L'){
            while(t[i]--){
                A[timea]=A[timea-1]-1;
                timea++;

            }
        }
    }

    for(int i=0;i<m;i++){
        if(d_b[i]=='R'){
            while(t_b[i]--){
                B[timeb]=B[timeb-1]+1;
                timeb++;

            }
        }
        else if(d_b[i]=='L'){
            while(t_b[i]--){
                B[timeb]=B[timeb-1]-1;
                timeb++;

            }
        }
    }

    // timea와 timeb 중 더 오래 걸린 시간을 구합니다.
    int max_time = max(timea, timeb);

    // 만약 B가 먼저 끝났다면(timeb < max_time), B의 남은 시간 동안 마지막 위치를 유지시킵니다.
    for (int i = timeb; i < max_time; i++) {
        B[i] = B[timeb - 1];
    }

    // 만약 A가 먼저 끝났다면(timea < max_time), A의 남은 시간 동안 마지막 위치를 유지시킵니다.
    for (int i = timea; i < max_time; i++) {
        A[i] = A[timea - 1];
    }

    

    int meet=0;

    
        for(int i=1;i<max_time;i++){
            if(A[i]==B[i] && A[i-1]!=B[i-1]){
                meet++;
            }
        }
    
    

    cout<<meet;
    

    // Please write your code here.

    return 0;
}