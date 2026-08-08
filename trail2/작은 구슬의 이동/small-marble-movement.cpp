#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    // Please write your code here.
    int dx[4]={0,1,0,-1};
    int dy[4]={-1,0,1,0};

    int dir;

    if(d=='U'){
        dir=0;
    }
    else if(d=='R'){
        dir=1;
    }
    else if(d=='D'){
        dir=2;
    }
    else dir=3;

    for(int i=0;i<t;i++){

        int nx=c+dx[dir];
        int ny=r+dy[dir];

        if(nx>=1 && nx<=n && ny>=1 && ny<=n){
            c=nx;
            r=ny;
        }
        else{
            dir=(dir+2)%4;
            
        }

        
        
        
    }

    cout<<r<<" "<<c;

    return 0;
}