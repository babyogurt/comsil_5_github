#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];

int A[2000005] = {};
int B[2000005] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b[i] >> d_b[i];
    }

    int timea = 1;
    for(int i = 0; i < n; i++){
        int temp_t = t[i]; // 원본 시간 보존
        while(temp_t--){
            if(d[i] == 'R') A[timea] = A[timea - 1] + 1;
            else if(d[i] == 'L') A[timea] = A[timea - 1] - 1;
            timea++;
        }
    }

    int timeb = 1;
    for(int i = 0; i < m; i++){
        int temp_t = t_b[i]; // 원본 시간 보존
        while(temp_t--){
            if(d_b[i] == 'R') B[timeb] = B[timeb - 1] + 1;
            else if(d_b[i] == 'L') B[timeb] = B[timeb - 1] - 1;
            timeb++;
        }
    }

    int max_time = max(timea, timeb);

    // 남은 시간 동안 마지막 위치 유지
    for (int i = timeb; i < max_time; i++) {
        B[i] = B[timeb - 1];
    }
    for (int i = timea; i < max_time; i++) {
        A[i] = A[timea - 1];
    }

    int meet = 0;
    for(int i = 1; i < max_time; i++){
        // 현재 위치가 같고, 직전 위치가 달랐을 때
        if(A[i] == B[i] && A[i - 1] != B[i - 1]){
            meet++;
        }
    }

    cout << meet;

    return 0;
}