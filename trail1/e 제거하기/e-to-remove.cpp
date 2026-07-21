#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    s.erase(s.find("e"),1);
    cout<<s;
    return 0;
}