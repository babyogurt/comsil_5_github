#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0;i<2*n+1;i++){
        if(i%2==0){
            for(int j=0;j<2*n+1;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j=0;j<n+1;j++){
                cout<<"*   ";
            }
        }
        cout<<endl;
    }
    return 0;
}