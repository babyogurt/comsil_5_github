#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;

    string c;
    

    cin>>c;

    int len=a.length();

    for(int i=0;i<c.length();i++){
        string s;
        if(c[i]=='L'){
            s=a.substr(1,len-1)+a.substr(0,1);
        }
        else if(c[i]=='R'){
            s=a.substr(len-1,1)+a.substr(0,len-1);
        }
        a=s;

        
    }

    cout<<a;

    
    return 0;
}