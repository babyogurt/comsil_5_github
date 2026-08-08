#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int nx=0,ny=0;


    char order;

    int cnt=0;

    int dir=0;

    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};

    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
    

            if(s[i]=='R'){
                dir=(dir+1)%4;
            }
            else if(s[i]=='L'){
                dir=(dir+3)%4;
            }
            else {
                nx+=dx[dir];
                ny+=dy[dir];
            }

            cnt++;

            if(nx==0 && ny==0 && s[i]=='F'){
                cout<<cnt;
                return 0;
            }
    }

    cout<<"-1";
    return 0;
}