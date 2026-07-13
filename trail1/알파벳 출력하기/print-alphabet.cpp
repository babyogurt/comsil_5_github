#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    char k='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            
            cout<<k;
            if(k=='Z') k='A';
            else k++;
            
        }
        cout<<endl;
    }
    return 0;
}