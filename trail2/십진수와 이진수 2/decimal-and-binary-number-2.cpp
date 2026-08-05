#include <iostream>

using namespace std;

string N;

void Bin(int n){
    int dig[10];
    int k=0;
    while(true){
        if(n<2) {
            dig[k++]=n;
            break;
        }
        else{
            dig[k++]=n%2;
            n/=2;
        }
    }
    for(int i=k-1;i>=0;i--){
        cout<<dig[i];
    }
}
int Dec(string s){
    int  n=0;
    for(int i=0;i<s.length();i++){
        n=2*n+s[i]-'0';
    }
    return n;
}

int main() {
    cin >> N;

    // Please write your code here.
    Bin(17*Dec(N));

    

    return 0;
}