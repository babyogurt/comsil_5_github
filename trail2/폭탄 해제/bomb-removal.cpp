#include <iostream>
using namespace std;



int main() {
    // Please write your code here.

    string code;
    char C;
    int n;

    cin>>code>>C>>n;

    tuple<string ,char ,int> Line = make_tuple(code,C,n);

    cout<<"code : "<<code<<endl;
    cout<<"color : "<<C<<endl;
    cout<<"second : "<<n;

    return 0;
}