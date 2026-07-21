#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>64 && s[i]<91){
            cout<<s[i];
        }
        else if(s[i]>96 && s[i]<133){
            cout<<(char)(s[i]-32);
        }
    }
    return 0;
}