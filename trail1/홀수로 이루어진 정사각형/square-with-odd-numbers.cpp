#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int j=0;j<=(n-1)*2;j+=2){
        for(int i=11+j;i<=11+j+(n-1)*2;i+=2){
        cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}