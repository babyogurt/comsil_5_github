#include <iostream>

using namespace std;

int n;
int arr[101];

int F(int n){

    if(n==1) return arr[0];
    
    int f=F(n-1);

    if(arr[n-1]<f){
        return f;
    }
    else return arr[n-1];
    
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout<<F(n);

    return 0;
}