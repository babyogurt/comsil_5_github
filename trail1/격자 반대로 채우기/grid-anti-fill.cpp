#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int k=1;
    int arr[10][10];

    for(int i=N-1;i>=0;i--){
        for(int j=0;j<N;j++){
            if(N%2==0){
                if(i%2==1){
                    arr[N-j-1][i]=k;
                }
                else{
                    arr[j][i]=k;
                }
            }

            else if(N%2==1){
                if(i%2==0){
                    arr[N-j-1][i]=k;
                }
                else{
                    arr[j][i]=k;
                }
            }
            k++;
        }
    }
    

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}