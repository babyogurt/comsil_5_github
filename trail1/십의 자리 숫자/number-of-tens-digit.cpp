#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int cnt[9]={};

    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==0) break;

        if(arr[i]>=90){
            cnt[8]++;
        }
        else if(arr[i]>=80){
            cnt[7]++;
        }
        else if(arr[i]>=70){
            cnt[6]++;
        }
        else if(arr[i]>=60){
            cnt[5]++;
        }
        else if(arr[i]>=50){
            cnt[4]++;
        }
        else if(arr[i]>=40){
            cnt[3]++;
        }
        else if(arr[i]>=30){
            cnt[2]++;
        }
        else if(arr[i]>=20){
            cnt[1]++;
        }
        else if(arr[i]>=10){
            cnt[0]++;
        }
    }

    for(int i=0;i<9;i++){
        cout<<i+1<<" - "<<cnt[i]<<endl;
    }
    return 0;
}