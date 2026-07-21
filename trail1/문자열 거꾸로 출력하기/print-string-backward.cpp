#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    while(s!="END"){
        for(int i=s.length()-1;i>=0;i--){
            cout<<s[i];
        }
        cout<<endl;
        cin>>s;
    }
    return 0;
}