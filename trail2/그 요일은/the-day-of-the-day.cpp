#include <iostream>
using namespace std;

int day(int a,int b){
    int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int d=0;
    for(int i=0;i<a-1;i++){
        d+=mon[i];
    }
    d+=b;
    return d;
}

bool week(string a,int n){

    string A[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};


    for(int i=0;i<7;i++){
        if(A[i]==a){
            if(n>=i) return true;
            else return false;
        }
        
    }return false;
}


int main() {
    // Please write your code here.
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string A;
    cin>>A;

    int dff=day(c,d)-day(a,b);

    
    if(week(A,dff%7)){
        cout<<dff/7+1;
    }
    else cout<<dff/7;

    



    
    return 0;
}