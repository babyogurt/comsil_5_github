#include <iostream>
using namespace std;

int main() {
    // Please write your code here

    int dir_cur=0;
    int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0};
    int x=0,y=0;

    
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='L'){
            dir_cur=(dir_cur+3)%4;
        }
        else if(s[i]=='R'){
            dir_cur=(dir_cur+1)%4;
        }
        else if(s[i]=='F'){
            x+=dx[dir_cur];
            y+=dy[dir_cur];
        }
    }
    cout<<x<<" "<<y;




    return 0;
}