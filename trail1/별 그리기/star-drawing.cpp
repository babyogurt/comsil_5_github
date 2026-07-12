#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    for(int j=0;j<n;j++){
        for(int p=0;p<n-j-1;p++){
            cout<<" ";
        }
        for(int i=0;i<2*j+1;i++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int j=1;j<n;j++){
        for(int p=0;p<j;p++){
            cout<<" ";
        }
        for(int i=0;i<2*(n-j)-1;i++){
            cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}
