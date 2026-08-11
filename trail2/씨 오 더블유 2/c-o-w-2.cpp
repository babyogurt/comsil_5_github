#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string s;

    cin>>n>>s;

    int cnt=0;

    for(int i=0;i<n-2;i++){
        if(s[i]=='C'){
            for(int j=i+1;j<n-1;j++){
                if(s[j]=='O'){
                    for(int k=j+1;k<n;k++){
                        if(s[k]=='W'){
                            cnt++;
                        }
                    }
                }               
            }
        }        
    }

    cout<<cnt;
    

    return 0;
}