#include <iostream>
#include <climits>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int m=INT_MAX;
    
        for(int i=0;i<101;i+=2){
            for(int j=0;j<101;j+=2){
                int M=0;
                int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
                for(int k=0;k<n;k++){

                if(x[k]>i && y[k]>j) cnt1++;
                else if(x[k]<i && y[k]>j) cnt2++;
                else if(x[k]<i && y[k]<j) cnt3++;
                else cnt4++;
                
                }
            M=max(M,max(cnt1,max(cnt2,max(cnt3,cnt4))));
            m=min(m,M);
        }
    }

    cout<<m;
    

    return 0;
}