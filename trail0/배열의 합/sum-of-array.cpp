#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[4][4],b[4]={
        
    };

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
            b[i]+=a[i][j];
        }
        
    }

    for(int i=0;i<4;i++){
        cout<<b[i]<<endl;
    }
    return 0;
}