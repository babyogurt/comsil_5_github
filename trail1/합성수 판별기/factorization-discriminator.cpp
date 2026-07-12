#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int k=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"C";
            k++;
            break;
        }
    }
     
    if(k==0) cout<<"N";

    
    return 0;
}