#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int arr[100]={};

    for(int i=0;i<100;i++){
        for(int j=x1[i]-1;j<x2[i];j++){
            arr[j]++;
        }
    }

    int max=0;
    for(int i=0;i<100;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }

    cout<<arr[max];

    // Please write your code here.

    return 0;
}