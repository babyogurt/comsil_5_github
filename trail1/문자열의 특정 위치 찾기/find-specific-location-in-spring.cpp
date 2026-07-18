#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    string c;
    cin>>s>>c;
    
    if(s.find(c)!=string::npos){
        cout<<s.find(c);
    }
    else cout<<"No";
    
    
    return 0;
}