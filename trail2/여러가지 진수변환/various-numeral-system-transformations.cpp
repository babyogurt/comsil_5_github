#include <iostream>
using namespace std;

void four(int n){
    string s;
    int k=0;
    while(n>=0){
        if(n<4){
            s+=to_string(n);
            break;
        }
        else {
            s+=to_string(n%4);
            n/=4;
        }
    }
    int len=s.length();

    for(int i=len-1;i>=0;i--){
        cout<<s[i];
    }
}
void eight(int n){
    string s;
    int k=0;
    while(n>=0){
        if(n<8){
            s+=to_string(n);
            break;
        }
        else {
            s+=to_string(n%8);
            n/=8;
        }
    }
    int len = s.length();
    for(int i=len-1;i>=0;i--){
        cout<<s[i];
    }
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int b;
    cin>>b;

    

    if(b==4){
        four(n);    
    }
    if(b==8){
        eight(n);
    }
    return 0;
}