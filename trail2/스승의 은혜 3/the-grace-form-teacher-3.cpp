#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1001];
int S[1001];
int dc[1001];
int org[1001];


int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
        dc[i]=P[i]/2+S[i];
        org[i]=P[i]+S[i];
    }
    int m=0;
    // Please write your code here.
    for(int i=0;i<N;i++){    

        int price=0;
        int ans[1001]={};
        
        for(int j=0;j<N;j++){
            
            if(i==j){
               ans[j]=dc[j];
            }
            else ans[j]=org[j];
            
        }

        sort(ans,ans+N);

        for(int j=0;j<N;j++){
            
            price+=ans[j];
            
            if(price>B) {   
                break;
            }
            m=max(m,j+1);
            

        }
    }

    
    // Please write your code here.
    cout<<m;

    return 0;
}