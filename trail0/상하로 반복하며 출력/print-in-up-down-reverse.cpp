#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int a[N][N];

    for(int j=0;j<N;j++){
        if(j%2==0){
            for(int i=0;i<N;i++){
            a[i][j]=i+1;
            }
        }
        else {
            for(int i=0;i<N;i++){
                a[i][j]=N-i;
            }

        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}