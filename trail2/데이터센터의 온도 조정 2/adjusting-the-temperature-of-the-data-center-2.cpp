#include <iostream>

using namespace std;

int N, C, G, H;
int Ta[1001], Tb[1001];

int main() {
    cin >> N >> C >> G >> H;

    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
    }

    int m=0;

    for(int k=-1;k<=1005;k++){
        int sum=0;
        for(int i=0;i<N;i++){
            if(Ta[i]>k) sum+=C;
            else if(Tb[i]<k) sum+=H;
            else sum+=G;
        }
        m=max(m,sum);

    }

    cout<<m;
    

    // Please write your code here.

    return 0;
}