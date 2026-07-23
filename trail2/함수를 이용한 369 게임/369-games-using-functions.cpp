#include <iostream>
using namespace std;

bool Check(int i, int k){
    
    return i/k==3 || i/k==6 || i/k==9;
}

bool Find(int i){
    int k=100000;

    while(k>0){
        if(Check(i,k)) return true;
        else {
            i%=k;
            k/=10;
            
        }
    
    }
    return false;
    
    
}


int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int cnt=0;

    for(int i=a;i<=b;i++){
        if(i%3==0 || Find(i)){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}