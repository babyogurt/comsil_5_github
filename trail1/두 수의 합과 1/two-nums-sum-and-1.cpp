#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    string sum=to_string(a+b);



    int cnt=0;

    for(int i=0;i<sum.length();i++){
        if(sum[i]=='1') cnt++;
    }
    cout<<cnt;
    return 0;
}