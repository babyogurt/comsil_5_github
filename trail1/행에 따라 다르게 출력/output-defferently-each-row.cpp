#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int k=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<++k<<" ";
                
            }
            else{
                k+=2;
                cout<<k<<" ";
                
            }
        }
        cout<<endl;
    }
    return 0;
}