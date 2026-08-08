#include <iostream>
using namespace std;

bool InRange(int x, int y,int n, int m) {
    return (0 <= x && x < n && 0 <= y && y < m);
}


int main() {
    // Please write your code here.
    int dr[4]={0,1,0,-1};
    int dc[4]={1,0,-1,0};

    int n,m;
    cin>>n>>m;

    int arr[100][100]={};

    int r=0,c=0;
    int dir=0;
    int nr=r+dr[dir],nc=c+dc[dir];
    arr[r][c]=1;

    for(int k=2;k<=n*m;k++){
        nr=r+dr[dir];
        nc=c+dc[dir];
        if(!InRange(nr,nc,n,m) || arr[nr][nc]!=0){
            dir=(dir+1)%4;
            nr=r+dr[dir];
            nc=c+dc[dir];

        }
        
            r=nr;
            c=nc;
            arr[r][c]=k;    
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}