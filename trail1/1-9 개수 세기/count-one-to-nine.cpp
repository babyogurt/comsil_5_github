#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int arr[N];
    int cnt[9]={};
    for(int i=0;i<N;i++){
        cin>>arr[i];
        
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<9;j++){
            if(arr[i]==j+1){
                cnt[j]++;
            }
        }
    }
    for(int i=0;i<9;i++){
        cout<<cnt[i]<<endl;
    }

    return 0;
}