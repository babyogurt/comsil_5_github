#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,m;
    cin>>N>>m;
    
    int r,c;

    int arr[9][9]={};
    
    for(int i=0;i<m;i++){
        cin>>r>>c;
        arr[r-1][c-1]=i+1;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}