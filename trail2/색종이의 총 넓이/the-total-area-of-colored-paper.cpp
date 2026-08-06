#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int arr[2001][2001]={};

    int x=1000;
    int y=1000;

    for(int i=0;i<n;i++){
        cin>>x>>y;

        for(int j=x+1000;j<x+1008;j++){
            for(int k=y+1000;k<y+1008;k++){
                arr[j][k]=1;
            }
        }
    }

    int cnt=0; 


    for(int i=0;i<2001;i++){
        for(int j=0;j<2001;j++){
            if(arr[i][j]==1) cnt++;
        }
    }

    cout<<cnt;
    return 0;
}