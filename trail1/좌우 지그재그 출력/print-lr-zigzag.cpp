#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int k=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<k<<" ";
                k++;
                if(j==n-1) k+=(n-1);
            }
            else{
                cout<<k<<" ";
                k--;
                if(j==n-1) k+=(n+1);
            }
        }
        cout<<endl;
        
    }
    return 0;
}