#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[4][4];
    int total=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            total+=a[i][j];
        }
    }

    cout<<total;
    return 0;
}