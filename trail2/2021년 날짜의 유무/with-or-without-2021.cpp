#include <iostream>
#include <string>

using namespace std;

int M, D;

bool Exist(){
    if(M==2){
        return D<=28 && D>=1;
    }
    else if((M%2==0 && M<7)||(M%2==1 && M>8 && M<12)){
        return D<=30 && D>=1;
    }
    
    else {
        if(M<=12){
            return D<=31 && D>=1;
        }
        
    }
    return false;
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    if(Exist()) cout<<"Yes";
    else cout<<"No";

    return 0;
}