#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;

    int len=a.length();

    int cnt=0;

    for(int i=0;i<len;i++){
        if(a[i]=='('){
            for(int j=i+1;j<len;j++){
                if(a[j]==')'){
                    cnt++;
                }
            }
        }
    }

    cout<<cnt;
    return 0;
}