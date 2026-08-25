#include <iostream>

using namespace std;

int n;
int l[10], r[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }


    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){

                int cor=true;
                int ans[101]={};

                for(int t=0;t<n;t++){
                    if(t==i || t==j || t==k) continue;
                    else {
                        for(int p=l[t];p<=r[t];p++){
                            ans[p]++;
                        }
                    }
                }
                for(int t=0;t<101;t++){
                    if(ans[t]==0||ans[t]==1){
                        cor=true;
                    }
                    else {
                        cor=false;
                        break;
                    }
                }
                if(cor) cnt++;
            }
        }
    }

    cout<<cnt;

    // Please write your code here.

    return 0;
}