#include <iostream>
using namespace std;

void Print(int n){
    if(n==0) return;
    for(int i=0;i<n;i++){
        cout<<"* ";
    }
    cout<<endl;
    Print(n-1);
    for(int i=0;i<n;i++){
        cout<<"* ";
    }
    cout<<endl;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    Print(n);
    return 0;
}