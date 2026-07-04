#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int cnt[6]={};

    for(int i=0;i<10;i++){
        cin>>arr[i];
        for(int j=0;j<6;j++){
            if(arr[i]==j+1){
                cnt[j]++;
            }
        }
    }

    for(int i=0;i<6;i++){
        cout<<i+1<<" - "<<cnt[i]<<endl;
    }


    return 0;
}