#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int dr[4]={1,0,-1,0};
    int dc[4]={0,1,0,-1};

    int n;
    cin>>n;

    int arr[101][101]={};

    int r=(n-1)/2,c=(n-1)/2;
    int dir=0;
    
    arr[r][c]=1;

    for(int k=2;k<=n*n;k++){
        int ndir = (dir + 1) % 4;
        
        if(arr[r + dr[ndir]][c + dc[ndir]] == 0) {
            dir = ndir;
        }
        
        r += dr[dir];
        c += dc[dir];
        arr[r][c] = k;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}