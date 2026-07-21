#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    string str;

    int len=s.length();

    str=s.substr(1,len-1)+s.substr(0,1);

    cout<<str;
    return 0;
}