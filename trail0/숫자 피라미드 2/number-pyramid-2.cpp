#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int k=1;

    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}