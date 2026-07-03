#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    int totodd=0,toteven=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
        if(i%2==0) {
            totodd+=a[i];
        }
        else toteven+=a[i];
    }
    if(totodd>=toteven){
        cout<<totodd-toteven;
    }
    else cout<<toteven-totodd;
    return 0;
}