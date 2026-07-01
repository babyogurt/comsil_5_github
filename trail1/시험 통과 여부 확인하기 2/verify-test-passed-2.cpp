#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int arr[N][4];
    int grd[N]={};

    for(int i=0;i<N;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];

            grd[i]+=arr[i][j];
        }
        grd[i]=grd[i]/4;
    }

    int n=0;

    for(int i=0;i<N;i++){
        if(grd[i]>=60) {cout<<"pass"<<endl; n++;}
        else cout<<"fail"<<endl;
    }

    cout<<n;

    return 0;
}