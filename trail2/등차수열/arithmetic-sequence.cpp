#include <iostream>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m=0;

    for(int k=0;k<101;k++){
        int cnt=0;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((a[j]-k)==(k-a[i])) cnt++;
            }
        }

        m=max(m,cnt);
        //cout<<cnt<<endl;
    }

    cout<<m;

    // Please write your code here.

    return 0;
}