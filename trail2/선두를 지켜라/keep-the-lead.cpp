#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m,n;
    int a[1000001]={};
    int b[1000001]={};

    cin>>n>>m;
    
    int timea=1;

    for(int i=0;i<n;i++){
        int v,t;

        cin>>v>>t;

        

        while(t--){
            a[timea]=a[timea-1]+v;
            timea++;
        }
    }
    int timeb=1;
    for(int i=0;i<m;i++){
        int v,t;

        cin>>v>>t;

        

        while(t--){
            b[timeb]=b[timeb-1]+v;
            timeb++;
        }
    }

    int f[1000001]={};


    for(int i=1;i<timea;i++){
        if(a[i]>b[i]) f[i]=1;
        else if(a[i]<b[i]) f[i]=-1;
        else f[i]=f[i-1];
    }

    int ans = 0;
    for(int i = 2; i < timea; i++){
        // 이전 선두와 현재 선두가 다르고, 둘 다 0이 아닐 때만 선두 교체 인정
        if(f[i - 1] != 0 && f[i] != 0 && f[i - 1] != f[i]) {
            ans++;
        }
    }
    cout << ans;
    
    return 0;
}