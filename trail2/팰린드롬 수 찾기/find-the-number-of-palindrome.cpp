#include <iostream>

using namespace std;

int X, Y;

int Pan(int n){
    string s;

    while(n){
        s+=n%10+'0';
        n/=10;
    }

    int p=stoi(s);

    return p;
}

int main() {
    cin >> X >> Y;

    int cnt=0;

    for(int i=X;i<=Y;i++){
        if(Pan(i)==i) cnt++;
    }
    cout<<cnt;

    // Please write your code here.

    return 0;
}