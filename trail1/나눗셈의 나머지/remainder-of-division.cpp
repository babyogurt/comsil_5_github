#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    cin>>A>>B;
    int arr[10]={};
    //int n=A/B;

    while(A>1){
        
        
        arr[A%B]++;
        A=A/B;
        
    }
    int sum=0;
    for(int i=0;i<10;i++){
        //cout<<arr[i]<<" ";
        sum+=arr[i]*arr[i];
    }
    cout<<sum;
    return 0;
}