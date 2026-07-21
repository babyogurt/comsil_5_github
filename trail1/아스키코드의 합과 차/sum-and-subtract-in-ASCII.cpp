#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a,b;
    cin>>a>>b;

    cout<<(int)a+(int)b<<" ";
    if((int)a>(int)b){
        cout<<(int)a-(int)b;
    }
    else cout<<(int)b-(int)a;
    

    return 0;
}