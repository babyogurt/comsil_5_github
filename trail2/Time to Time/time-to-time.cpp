#include <iostream>
using namespace std;

int min(int a,int b){
    return a*60+b;
}

int main() {
    // Please write your code here.
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    cout<<min(c,d)-min(a,b);


    return 0;
}