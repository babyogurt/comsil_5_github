#include <iostream>
using namespace std;

void Find_Min(int n,int m){
    int min;
    for(int i=1;i<=100;i++){
        if(n%i==0 && m%i==0){
            min=i;
        }
    }

    cout<<min;
}

int main() {
    // Please write your code here.
    int n,m;

    cin>>n>>m;

    Find_Min(n,m);
    return 0;
}