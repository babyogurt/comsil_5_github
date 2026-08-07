#include <iostream>

using namespace std;

int N, M, K;
int student[10000];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    int num[100]={};

    for(int i=0;i<M;i++){
        int id=student[i];
        num[id]++;

        
        if(num[id]>=K){
            cout<<id;
            return 0;
        }
    
    }
    cout<<"-1";

    

    // Please write your code here.

    return 0;
}