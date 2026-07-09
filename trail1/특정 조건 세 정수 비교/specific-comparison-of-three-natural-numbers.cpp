#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;;
    cin>>a>>b>>c;

    if(a<=b && a<=c){
        cout<<true<<" ";
    }
    else cout<<false<<" ";

    if(a==b && b==c){
        cout<<true;
    }
    else cout<<false;
    return 0;
}