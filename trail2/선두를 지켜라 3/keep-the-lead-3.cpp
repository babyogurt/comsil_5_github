#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;

    int A[1000001]={};
    int timea=1;
    int B[1000001]={};
    int timeb=1;

    for(int i=0;i<n;i++){
        int v,t;
        cin>>v>>t;

        while(t--){
            A[timea]=A[timea-1]+v;
            timea++;
        }
    }
    for(int i=0;i<m;i++){
        int v,t;
        cin>>v>>t;

        while(t--){
            B[timeb]=B[timeb-1]+v;
            timeb++;
        }
    }

    int f[1000001]={};

    for(int i=1;i<timea;i++){
        if(A[i]>B[i]) f[i]=1;
        else if(A[i]<B[i]) f[i]=-1;
        else f[i]=2;
    }

    int cnt=0;

    for(int i=1;i<timea;i++){
        if(f[i]!=f[i-1]) cnt++;
    }

    cout<<cnt;
    return 0;
}