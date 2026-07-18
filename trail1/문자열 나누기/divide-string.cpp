#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt=0;
    string s;


    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.length();j++){
            cout<<s[j];
            cnt++;
            if(cnt==5){
                cout<<endl;
                cnt=0;
            }
        }
        
    }
    return 0;
}