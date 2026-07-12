#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=n;i>0;i--){
        for(int p=0;p<2*(n-i);p++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}