#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m,sum=0;
    cin>>n;
    string s;

    for(int i=0;i<n;i++){
        cin>>m;
        sum+=m;
    }

    s=to_string(sum);

    string str=s.substr(1,s.length()-1)+s.substr(0,1);
    cout<<str;
        return 0;
}