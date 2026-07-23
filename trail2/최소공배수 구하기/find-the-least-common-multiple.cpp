#include <iostream>
using namespace std;

void Find_Max(int n,int m){
    
    int i=m;
    while(1){
        
        if(i%n==0 && i%m==0){
            cout<<i;
            break;
        }
        i++;
    }
}

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;

    Find_Max(n,m);
    return 0;
}