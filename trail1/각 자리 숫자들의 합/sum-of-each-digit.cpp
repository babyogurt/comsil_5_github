#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    string s=to_string(n);

    int k=0;

    for(int i=0;i<s.length();i++){
        k+=s[i]-'0';
    }

    cout<<k;
    return 0;
}