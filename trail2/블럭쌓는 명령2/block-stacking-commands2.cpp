#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,k;
    cin>>n>>k;

    int arr[100]={};

    int a,b;

    for(int i=0;i<k;i++){
        cin>>a>>b;
        for(int j=a-1;j<b;j++){
            arr[j]++;
        }
    }

    int max=0;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }


    

    cout<<arr[max];

    return 0;
}