#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int k=9;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k;
            k--;
            if(k==0) k=9;
        }
        cout<<endl;
    }
    return 0;
}