#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin>>N;
    int arr[15][15];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            arr[i][0]=1;
            if(i==j){
                arr[i][j]=1;
            }
        }
    }

    for(int i=2;i<N;i++){
        for(int j=1;j<i;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}