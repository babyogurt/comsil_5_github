#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int n;

    cin>>s>>n;

    

    int len=s.length();
    
    if(n>len) n=len;

    for(int i=len-1;i>=len-n;i--){
        cout<<s[i];
    }
    return 0;
}