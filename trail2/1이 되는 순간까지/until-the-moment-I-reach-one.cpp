#include <iostream>
using namespace std;
int cnt=0;

int Print(int n){

    
    

    
    if(n==1) return cnt;
    
    
    cnt++;

    if(n%2==0) {
        //cnt++;
        return Print(n/=2);}
    
    else {
        //cnt++;
        return Print(n/=3);
    }
    
    
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    cout<<Print(n);
    return 0;
}