#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;

    getline(cin,s);
    

    for(int i=2;i<10;i++){
        cout<<s[i];
    }
    return 0;
}