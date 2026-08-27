#include <iostream>
#include <string>

using namespace std;

string inp[3];
int chk(int i,int j,int p,int q){
    
    int v = inp[i][j] - '0';   // char -> int 변환
    if (v == p) return 1;
    else if (v == q) return 2;
    else return 0;
}

int main() {
    for (int i = 0; i < 3; i++) cin >> inp[i];

    int cnt=0;

    // Please write your code here.
    for(int p=1;p<10;p++){
        for(int q=p+1;q<10;q++){
            bool win=false;
            for(int i=0;i<3;i++){
                if (chk(i,0,p,q)*chk(i,1,p,q)*chk(i,2,p,q)==1);

                else if(chk(i,0,p,q)*chk(i,1,p,q)*chk(i,2,p,q)==8);
        
                else if(chk(i,0,p,q)*chk(i,1,p,q)*chk(i,2,p,q)==0);
                
                else {
                    win=true;
                }

                if (chk(0,i,p,q)*chk(1,i,p,q)*chk(2,i,p,q)==1);

                else if(chk(0,i,p,q)*chk(1,i,p,q)*chk(2,i,p,q)==8);
        
                else if(chk(0,i,p,q)*chk(1,i,p,q)*chk(2,i,p,q)==0);
                
                else {
                    win=true;
                }
            }
            int d1 = chk(0,0,p,q) * chk(1,1,p,q) * chk(2,2,p,q);
            int d2 = chk(0,2,p,q) * chk(1,1,p,q) * chk(2,0,p,q);
            if (d1 == 2 || d1 == 4) win = true;
            if (d2 == 2 || d2 == 4) win = true;

            if (win) cnt++;
        }
    }


    cout<<cnt;

    return 0;
}