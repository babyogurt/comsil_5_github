#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,M;
    cin>>N>>M;
    int arr[100][100]={};
    int k=1;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            arr[i][j]=k;
            k++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}