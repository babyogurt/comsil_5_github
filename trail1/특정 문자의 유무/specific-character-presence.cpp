#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    int cnt=0;

    for(int i=0;i<s.length();i++){
        if((s[i]=='e' && s[i+1]=='e')) {
            cout<<"Yes ";
            cnt=1;
            break;
        }
    }
    if(cnt==0) cout<<"No ";

    cnt=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='a' && s[i+1]=='b'){
            cout<<"Yes ";
            cnt=1;
            break;
        }
    }
    if(cnt==0) cout<<"No ";

    
    return 0;
}