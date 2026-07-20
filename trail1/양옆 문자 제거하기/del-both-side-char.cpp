#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    s.erase(1,1);
    s.erase(s.length()-2,1);
    cout<<s;
    return 0;
}