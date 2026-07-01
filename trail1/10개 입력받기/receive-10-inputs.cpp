#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    float n=0;
    int sum=0;
    for(int j=0;j<10;j++){
        
        if(arr[j]==0) break;
        n++;
        sum+=arr[j];
        
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" ";
    cout<<sum/n;


    return 0;
}