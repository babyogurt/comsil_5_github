#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s,a;
    cin>>s>>a;

    int index=-1;

    int len1=s.length();
    int len2=a.length();
    
    for(int i=0;i<len1-len2+1;i++){
        if(s.substr(i,len2)==a){
            index=i;
            break;
        }
    }

    cout<<index;


    return 0;
}