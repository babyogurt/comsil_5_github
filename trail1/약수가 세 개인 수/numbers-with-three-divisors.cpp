#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int cnt=0,k=0;

    for(int i=a;i<=b;i++){
        cnt=0;
        for(int j=1;j<=i;j++){
            if(i%j==0) cnt++;
        }
        if(cnt==3) k++;
    }
    cout<<k;
    return 0;
}