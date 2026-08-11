#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;

    int cnt=0;

    int n=a.length();

    for(int i=0;i<n-3;i++){
        if(a[i]=='(' && a[i+1]=='('){
            for(int j=i+2;j<n-1;j++){
                if(a[j]==')' && a[j+1]==')'){
                    cnt++;
                }
            }
        }
    }

    cout<<cnt;
    return 0;
}