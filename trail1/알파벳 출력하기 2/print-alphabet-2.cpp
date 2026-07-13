#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    char k='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<k<<" ";
            if(k=='Z') k='A';
            else k++;
        }
        cout<<endl;
    }
    return 0;
}