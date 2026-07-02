#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int k=0;

    for(int i=1;i<=100;i++){
        k+=i;
        if(k>=N){
            cout<<i;
            break;
        }
    }
    return 0;
}