#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    int n;

    

    while(s.length()>1){
        cin>>n;
        if(n>=s.length()){
            n=s.length()-1;
        }
        s.erase(n,1);
        cout<<s<<endl;
        
    }
    return 0;
}