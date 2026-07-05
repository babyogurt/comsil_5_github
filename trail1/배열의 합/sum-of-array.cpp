#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4][4];
    int tot[4]={};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            tot[i]+=arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        cout<<tot[i]<<endl;
    }

    return 0;
}