#include <iostream>

using namespace std;

int n;
int A[100];
int B[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    int cnt=0;

    for(int i=0;i<n;i++){
        
        if(i>0){
            A[i]+=(A[i-1]-B[i-1]);
        }
        
        cnt+=(A[i]-B[i]);
    }

    // Please write your code here.
    cout<<cnt;

    return 0;
}