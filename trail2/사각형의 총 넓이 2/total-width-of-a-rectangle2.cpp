#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int arr[2001][2001]={};
    //int cur_x=1000;
    //int cur_y=1000;

    int x1[10]={};
    int x2[10]={};
    int y1[10]={};
    int y2[10]={};

    for(int i=0;i<n;i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        x1[i]+=1000;
        x2[i]+=1000;
        y1[i]+=1000;
        y2[i]+=1000;
    }

    for(int i=0;i<n;i++){

        for(int j=x1[i];j<x2[i];j++){
            for(int k=y1[i];k<y2[i];k++){
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