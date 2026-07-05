#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[3][3], brr[3][3],crr[3][3]={};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>brr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            crr[i][j]=arr[i][j]*brr[i][j];
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}