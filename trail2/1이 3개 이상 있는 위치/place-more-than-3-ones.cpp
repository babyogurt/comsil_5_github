#include <iostream>

using namespace std;

int n;
int grid[100][100];

bool nam(int x,int y,int n){
    if(x<n && x>=0 && y>=0 && y<n) return true;
    else return false;
}

int main() {
    cin >> n;

    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int cnt=0;
    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<4;k++){
                int nx=i+dx[k],ny=j+dy[k];
                if(nam(nx,ny,n)){
                    if(grid[nx][ny]==1) cnt++;
                }
            }
            if(cnt>=3) ans++;
            cnt=0;
            
        }
    }


    cout<<ans;
    // Please write your code here.

    return 0;
}