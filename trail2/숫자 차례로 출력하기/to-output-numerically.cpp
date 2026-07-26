#include <iostream>
using namespace std;

void Print1(int n){
    if(n==0) return;

    Print1(n-1);
    cout<<n<<" ";
}

void Print(int n){
    if(n==0) return;

    cout<<n<<" ";
    Print(n-1);
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    Print1(n);
    cout<<endl;
    Print(n);
    return 0;
}