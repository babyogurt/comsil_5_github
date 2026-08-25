#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    sort(P,P+N);

    int m=0;

    for(int i=0;i<N;i++){
        P[i]/=2;
        int price=0;
        for(int j=0;j<N;j++){
            price+=P[j];
           

            if(price>B) {   
                break;
            }
            
            m=max(m,j+1);

        }
        
        P[i]*=2;
    }

    // Please write your code here.
    cout<<m;

    return 0;
}