#include <iostream>

using namespace std;

int N;
int pigeon[100];
int position[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> pigeon[i] >> position[i];
    }

    int go[11]={};

    int cnt=0;

    for(int i=0;i<N;i++){
        if(go[pigeon[i]]==0){
            go[pigeon[i]]=position[i]+1;
        }

        else {
            if(go[pigeon[i]]!=position[i]+1) cnt++;

            go[pigeon[i]]=position[i]+1;
            
        }
        
    }

    cout<<cnt;

    // Please write your code here.

    return 0;
}