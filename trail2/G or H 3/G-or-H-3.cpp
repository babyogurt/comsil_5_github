#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,k;
    cin>>n>>k;

    int arr[10001]={};

    for(int i=0;i<n;i++){
        int l;
        char c;
        cin>>l>>c;
        if(c=='G'){
            arr[l]=1;
        }
        else arr[l]=2;
        
    }

    int current_sum = 0;
    
    // 핵심 1: 위치 i부터 i+k까지 포함하므로 윈도우 크기는 k + 1 입니다.
    // 핵심 2: K가 10000보다 클 경우를 대비해 윈도우 최대 크기를 10000으로 제한합니다.
    int window_size = min(k + 1, 10000);

    // 첫 번째 윈도우 합 계산
    for(int i = 1; i <= window_size; i++) {
        current_sum += arr[i];
    }

    int m = current_sum;

    // 슬라이딩 윈도우 적용
    for(int i = window_size + 1; i <= 10000; i++) {
        // 맨 앞의 값은 빼고, 새로운 맨 뒤의 값은 더해줍니다.
        current_sum = current_sum - arr[i - window_size] + arr[i];
        m = max(m, current_sum);
    }
    cout<<m;

    return 0;
}