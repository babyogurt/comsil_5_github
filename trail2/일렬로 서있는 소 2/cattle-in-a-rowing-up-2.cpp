#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int a[101];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<=a[j]){
                for(int k=j+1;k<n;k++){
                    if(a[j]<=a[k]){
                        cnt++;
                    }
                }
            }
            
        }
    }

    cout<<cnt;
    return 0;
}