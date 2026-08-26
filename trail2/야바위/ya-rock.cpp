#include <iostream>

using namespace std;

int N;
int a[100], b[100], c[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    // Please write your code here.
    

    int m=0;

    for(int i=0;i<3;i++){

        int cnt=0;
        int stone[3]={};
        stone[i]++;
        for(int j=0;j<N;j++){
            swap(stone[a[j]-1],stone[b[j]-1]);

            if(stone[c[j]-1]==1) cnt++;
        }

        m=max(m,cnt);
    }

    cout<<m;

    return 0;
}