#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;


    if(n<=2 || n>=12){
        cout<<"Winter";
    }
    else if(n<=5){
        cout<<"Spring";
    }
    else if(n<=8){
        cout<<"Summer";
    }
    else cout<<"Fall";
    return 0;
}