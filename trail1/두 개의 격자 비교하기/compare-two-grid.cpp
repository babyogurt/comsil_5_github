#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,M;
    int arr[10][10], brr[10][10],crr[10][10]={};

    cin>>N>>M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]!=brr[i][j]){
                crr[i][j]=1;
            }
            
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}