#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    for(int i=N;i>0;i--){
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}