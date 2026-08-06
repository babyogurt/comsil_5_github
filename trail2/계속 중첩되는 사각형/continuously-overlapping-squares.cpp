#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i]+=100;
        x2[i]+=100;
        y1[i]+=100;
        y2[i]+=100;
    }

    // Please write your code here.

    int arr[201][201]={};



    for(int k=0;k<n;k++){
        for(int i=x1[k];i<x2[k];i++){
            for(int j=y1[k];j<y2[k];j++){
                if(k%2==0){
                    arr[i][j]=1;
                }
                else {
                    arr[i][j]=2;
                }
            }
        }
    }

    int cnt=0;

    for(int i=0;i<201;i++){
        for(int j=0;j<201;j++){
            if(arr[i][j]==2) cnt++;
        }
    }

    cout<<cnt;
    return 0;
}