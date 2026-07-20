#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    int len=s.length();

    char f,c;
    f=s[0];
    c=s[1];

    for(int i=0;i<len;i++){
        if(s[i]==f){
            s[i]=c;
        }
        else if(s[i]==c){
            s[i]=f;
        }

    }
    cout<<s;

    return 0;
}