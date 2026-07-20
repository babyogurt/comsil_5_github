#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    char c=s[1];

    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            s[i]=s[0];
        }
    }
    cout<<s;
    return 0;
}