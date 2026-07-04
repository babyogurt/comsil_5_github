#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0;

    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n*i<<" ";

        if((n*i)%5==0){
            cnt++;
        }
        if(cnt==2) break;
    }
    return 0;
}