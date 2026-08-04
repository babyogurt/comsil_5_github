#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string bin;
    cin>>bin;

    int num=0;

    for(int i=0;i<bin.length();i++){
        num=2*num+(bin[i]-'0');
    }
    cout<<num;

    return 0;
}