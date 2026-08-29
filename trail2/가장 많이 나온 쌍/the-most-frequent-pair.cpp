#include <iostream>

using namespace std;

int n, m;
int a[100], b[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    int minm=0;

    for(int i=0;i<m;i++){
        
        int cnt=0;
        for(int j=0;j<m;j++){
            
            if((a[i]==a[j] && b[i]==b[j])||(a[i]==b[j] && a[j]==b[i])){
                cnt++;
            }
        }

        minm=max(minm,cnt);
    }

    cout<<minm;


    // Please write your code here.

    return 0;
}