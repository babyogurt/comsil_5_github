#include <iostream>
using namespace std;

void Print(int n){
    if(n==0) return;
    cout<<"HelloWorld"<<endl;
    Print(n-1);
   
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    Print(n);


    return 0;
}