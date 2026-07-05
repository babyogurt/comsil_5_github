#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    int arr[100][100];
    int k=0;

    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                arr[j][i]=k;
                k++;
            }
        }
        else {
            for(int j=0;j<n;j++){
                arr[n-j-1][i]=k;
                k++;
            }
        }
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
