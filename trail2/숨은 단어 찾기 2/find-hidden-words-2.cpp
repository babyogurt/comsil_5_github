#include <iostream>
#include <string>



using namespace std;

int N, M;
string arr[50];

bool f(int x,int y,int n,int m){
    if(x>=0 && x<n && y>=0 && y<m){
        return 1;
    }
    else return 0;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int dx[8]={-1,-1,-1,0,1,1,1,0};
    int dy[8]={-1,0,1,1,1,0,-1,-1};
    int cnt=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]=='L'){
                
                for(int k=0;k<8;k++){
                    int nx=i+dx[k],ny=j+dy[k];
                    if(f(nx,ny,N,M) && arr[nx][ny]=='E'){
                        nx+=dx[k];
                        ny+=dy[k];
                        if(f(nx,ny,N,M) && arr[nx][ny]=='E'){
                            cnt++;
                        }
                    }
                }

            }
        }
    }
    cout<<cnt;

    // Please write your code here.

    return 0;
}