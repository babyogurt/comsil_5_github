#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int m=0,n=0;
    for(int i=0;i<10;i++){
        cin>>a;
        if(a%3==0) m++;
        if(a%5==0) n++;
    }

    cout<<m<<" "<<n;
    
    return 0;
}