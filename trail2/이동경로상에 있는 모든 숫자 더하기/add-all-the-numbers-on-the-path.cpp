#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};

    int n,t;
    cin>>n>>t;

    string order;
    cin>>order;

    int arr[100][100]={};

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    
    int x=(n-1)/2;
    int y=(n-1)/2;
    
    int cnt=arr[x][y];

    int dir=0;

    for(int i=0;i<t;i++){
        
        if(order[i]=='L'){
            dir=(dir+3)%4;
        }
        else if(order[i]=='R'){
            dir=(dir+1)%4;
        }
        else{

            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx>=n || ny>=n || nx<0 || ny<0){
            
            }
            else{
                x=nx;
                y=ny;
                cnt+=arr[x][y];
            }
            
        }
        

    }

    cout<<cnt;
    return 0;
}