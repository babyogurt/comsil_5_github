#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a[4][4];
    int cnt=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];

            if(a[i][j]%5==0) cnt++;
        }
    }
    cout<<cnt;

    return 0;
}