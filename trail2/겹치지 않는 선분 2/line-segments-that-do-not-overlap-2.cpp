#include <iostream>

using namespace std;

int N;
int x1[100], x2[100];

bool f(int a,int b,int x,int y){
    if(a==x || b==y) return true;
    else if(a<x && b>y){
        return true;
    }
    else if(a>x && b<y){
        return true;
    }
    else return false;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
    }

    int ans=0;

    for(int i=0;i<N;i++){
        int cnt=0;
        for(int j=0;j<N;j++){
            if(i==j) continue;

            if(f(x1[i],x2[i],x1[j],x2[j])){
                cnt++;
            }
        }

        if(cnt==0) ans++;
    }

    cout<<ans;

    // Please write your code here.

    return 0;
}