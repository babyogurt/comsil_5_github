#include <iostream>
using namespace std;

int Find(int a,int b){
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%2==0 || i%10==5 || (i%3==0 && i%9!=0)){
            continue;
        }
        else cnt++;
        
    }
    return cnt;
}

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    cout<<Find(a,b);
    

    return 0;
}