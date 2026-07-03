#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    for(int i=0;i<N;i++){
        

        if(i%2==1){
            for(int j=N;j>0;j--){
                cout<<j;
            }

        }
        else for(int j=0;j<N;j++){
                cout<<j+1;
            }
            cout<<endl;
    }
    return 0;
}