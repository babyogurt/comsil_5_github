#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int k=0;

    for(int i=0;i<10;i++){
        cin>>a;
        if(a%2==1){
            k++;
        }
    }
    cout<<k;
    return 0;
}