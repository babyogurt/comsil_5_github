#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int grd[10]={};

    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==0) break;

        grd[(arr[i]/10)-1]++;
    }

    for(int i=9;i>=0;i--){
        cout<<10*(i+1)<<" - "<<grd[i]<<endl;
        }



    return 0;
}