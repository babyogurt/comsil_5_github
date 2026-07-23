#include <iostream>

using namespace std;

int Plus(int a,int b){
    return a+b;
}
int Minus(int a,int b){
    return a-b;
}
int Mul(int a,int b){
    return a*b;
}
int Div(int a,int b){
    return a/b;
}

//int M, D;

int main() {
    //cin >> M >> D;

    // Please write your code here.
    int a,c;
    char o;

    cin>>a>>o>>c;

    if(o=='+'){
        cout<<a<<" "<<o<<" "<<c<<" = "<<Plus(a,c);
    }
    else if(o=='-'){
        cout<<a<<" "<<o<<" "<<c<<" = "<<Minus(a,c);
    }
    else if(o=='*'){
        cout<<a<<" "<<o<<" "<<c<<" = "<<Mul(a,c);
    }
    else if(o=='/'){
        cout<<a<<" "<<o<<" "<<c<<" = "<<Div(a,c);
    }
    else cout<<"False";

    return 0;
}