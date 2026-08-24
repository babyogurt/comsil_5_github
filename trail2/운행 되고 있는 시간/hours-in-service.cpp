#include <iostream>

using namespace std;

int N;
int A[100], B[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    

    int ltime=0;

    for(int k=0;k<N;k++){
        
        int time[1001]={};
        for(int i=0;i<N;i++){
            
            
            if(i==k) continue;
            
            int cnt=0;
            

            for(int j=A[i];j<B[i];j++){
                time[j]++;

            }  

            for(int t=0;t<1001;t++){
                if(time[t]!=0) cnt++;
            }
            ltime=max(ltime,cnt);
            
        }
    }

    cout<<ltime;

    

   

    // Please write your code here.

    return 0;
}