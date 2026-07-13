#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a,b;
    cin>>n;

    int k=1;

    for(int i=0;i<n;i++){
        k=1;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            k*=j;
        }
        cout<<k<<endl;
    }
    return 0;
}