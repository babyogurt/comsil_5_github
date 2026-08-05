#include <iostream>
using namespace std;



int main() {
    // Please write your code here.
    int a,b;

    cin>>a>>b;

    string n;
    cin>>n;
    
    int num=0;

    for(int i=0;i<n.length();i++){
        num=a*num+n[i]-'0';
    }

    string s;

    while(true){
        if(num<b){
            s+=to_string(num);
            break;
        }
        else {
            s+=to_string(num%b);
            num/=b;
        }
    }

   

    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }

    return 0;
}