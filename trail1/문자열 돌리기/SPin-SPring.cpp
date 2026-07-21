#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    string str;

    int l=s.length();
    int len=s.length();

    cout<<s<<endl;
    
    for(int i=0;i<l;i++){
        str=s.substr(len-1,1)+s.substr(0,len-1);
        cout<<str<<endl;
        s=str;
    }
    return 0;
}