#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    getline(cin,s);
    char a;
    cin>>a;

    int cnt=0;

    for(int i=0;i<s.length();i++){
        if(s[i]==a) cnt++;
    }

    cout<<cnt;
    return 0;
}