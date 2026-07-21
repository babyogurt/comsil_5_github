#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            sum=sum+s[i]-48;
        }
    }
    cout<<sum;
    
    return 0;
}