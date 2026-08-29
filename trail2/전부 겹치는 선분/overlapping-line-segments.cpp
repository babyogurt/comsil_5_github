#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int arr[101]={};

    for(int i=0;i<n;i++){
        for(int j=x1[i];j<=x2[i];j++){
            arr[j]++;
        }
    }

    bool all=false;

    for(int i=0;i<101;i++){
        if(arr[i]==n) all=true;
    }

    if(all) cout<<"Yes";
    else cout<<"No";

    // Please write your code here.

    return 0;
}