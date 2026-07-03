#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[100];
    int n=0;

    int tot=0;

    for(int i=0;i<100;i++){
        cin>>a[i];
        if(a[i]==0){
            break;
        }
        n++;
        
    }
    for(int i=n-3;i<n;i++){
        tot+=a[i];
    }
    cout<<tot;
    return 0;
}