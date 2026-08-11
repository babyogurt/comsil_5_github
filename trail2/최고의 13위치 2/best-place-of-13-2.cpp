#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int grid[21][21];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    int m=0;
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            for(int a=0;a<n;a++){
                for(int b=0;b<n-2;b++){
                    if(a==i && !(b + 2 < j || j + 2 < b)){
                        continue;
                    }
                    else {
                        int cnt=grid[i][j]+grid[i][j+1]+grid[i][j+2]
                                +grid[a][b]+grid[a][b+1]+grid[a][b+2];
                    

                    m=max(m,cnt);
                    }
                }
            }
            
        }
    }

    cout<<m;
    return 0;
}