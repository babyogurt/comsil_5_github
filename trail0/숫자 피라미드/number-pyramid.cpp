#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    for(int i=0;i<N;i++){
        for(int j=1;j<=i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}