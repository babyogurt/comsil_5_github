#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    

    int dx[4]={-1,0,0,1};
    int dy[4]={0,-1,1,0};

    int n;
    cin>>n;

    char dir[100];
    int d[100];

    for(int i=0;i<n;i++){
        cin>>dir[i]>>d[i];
    }

    int nx=0,ny=0;

    int cnt=0;
    int direction;

    for(int i=0;i<n;i++){
        if(dir[i]=='W'){
            direction=0;
        }
        else if(dir[i]=='S'){
            direction=1;
        }
        else if(dir[i]=='N'){
            direction=2;
        }
        else if(dir[i]=='E'){
            direction=3;
        }

        for(int j=0;j<d[i];j++){
            nx=nx+dx[direction];
            ny=ny+dy[direction];
            cnt++;

            if(nx==0 && ny==0) {
                cout<<cnt;
                return 0;
            }
        }
        
        
        
    }

    cout<<"-1";
    
    return 0;
}