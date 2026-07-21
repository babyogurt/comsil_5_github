#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])) cout<<s[i];
        else if(isalpha(s[i])) {
            if(isupper(s[i])) cout<<(char)(s[i]+32);
            else cout<<s[i];
        }
    }
    return 0;
}