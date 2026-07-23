#include <iostream>
using namespace std;

    void Print(int n){
        int k=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<k<<" ";

                if(k==9)k=1;
                else k++;
            }
            cout<<endl;
        }
    }

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    Print(n);
    return 0;
}