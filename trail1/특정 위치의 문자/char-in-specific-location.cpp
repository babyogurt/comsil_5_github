#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a[6]={'L','E','B','R','O','S'};
    
    char c;
    cin>>c;
    int k=0;

    for(int i=0;i<6;i++){
        if(a[i]==c){
            cout<<i;
            k=1;

        }
    }
    if(k==0) cout<<"None";
    return 0;
}