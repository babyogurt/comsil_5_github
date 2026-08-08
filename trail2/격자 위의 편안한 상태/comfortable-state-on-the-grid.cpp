#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;

    int r,c;

    int arr[102][102]={};


    for(int i=0;i<m;i++){
        cin>>r>>c;
        arr[r][c]=1;

        
        if(arr[r-1][c]+arr[r+1][c]+arr[r][c-1]+arr[r][c+1]==3){
          cout<<1<<endl;
        }
        else cout<<0<<endl;


    
    
    }
    return 0;
}