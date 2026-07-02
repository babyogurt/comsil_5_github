#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    cin>>A>>B;
    while(1){
        
        if(A>B) break;
    
        cout<<A<<" ";
        if(A%2==1){
            A=A*2;
        }
        else A=A+3;

        
    }
    return 0;
}