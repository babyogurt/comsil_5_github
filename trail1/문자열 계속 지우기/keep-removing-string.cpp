#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;

    cin>>a>>b;

    while(a.find(b)!=string::npos){
        int i=a.find(b);
        a.erase(i,b.length());
    }
    cout<<a;
    return 0;
}