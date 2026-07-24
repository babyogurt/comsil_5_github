#include <iostream>
using namespace std;

bool Year(int y){
    if(y%100==0 && y%400==0) return true;
    else if(y%4==0 && y%100==0) return false;
    else if(y%4==0) return true;
    else return false;
}

bool Exist(int y,int m, int d){

    if(m==2){
        if(Year(y)){
            if(d<=29) return true;
            else return false;
        }
        else{
            if(d<=28) return true;
            else return false;
        }
    }
    else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        if(d<=31) return true;
        else return false;
    }
    else {
        if(d<=30) return true;
        else return false;
    }
    
}

int main() {
    // Please write your code here.
    int y,m,d;
    cin>>y>>m>>d;

    if(Exist(y,m,d)){
        if(m>=3 && m<=5) cout<<"Spring";
        else if(m>=6 && m<=8) cout<<"Summer";
        else if(m>=9 && m<=11) cout<<"Fall";
        else cout<<"Winter";
    }
    else cout<<"-1";
    return 0;
}