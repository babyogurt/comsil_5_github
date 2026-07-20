#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    int len=s.length();

    int cnt1=0,cnt2=0;

    for(int i=0;i<len-1;i++){
        if(s.substr(i,2)=="ee")
            cnt1++;
        if(s.substr(i,2)=="eb")
            cnt2++;
    }

    cout<<cnt1<<" "<<cnt2;
    
    
    return 0;
}