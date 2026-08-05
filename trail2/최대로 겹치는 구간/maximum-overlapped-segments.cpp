#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int arr[201]={};

    int a,b;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        for(int j=a+100;j<b+100;j++){
            arr[j]++;
        }
    }

    int max=0;

    for(int i=0;i<201;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }

    cout<<arr[max];
    return 0;
}