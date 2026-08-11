#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[19][19]={};

    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=2;i<17;i++){
        for(int j=2;j<17;j++){
            if(arr[i-2][j-2] * arr[i-1][j-1] * arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2]==1 
                || arr[i-2][j+2] * arr[i-1][j+1] * arr[i][j] * arr[i+1][j-1] * arr[i+2][j-2]==1){
                    cout<<"1"<<endl<<i+1<<" "<<j+1;
                    return 0;
                }

            else if(arr[i-2][j-2] * arr[i-1][j-1] * arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2]==32     
                || arr[i-2][j+2] * arr[i-1][j+1] * arr[i][j] * arr[i+1][j-1] * arr[i+2][j-2]==32){
                    cout<<"2"<<endl<<i+1<<" "<<j+1;
                    return 0;
                }
        }
    }

    for(int i=2;i<17;i++){
        for(int j=0;j<19;j++){
            if(arr[i-2][j] * arr[i-1][j] * arr[i][j] * arr[i+1][j] * arr[i+2][j] ==1){
                cout<<"1"<<endl<<i+1<<" "<<j+1;
                return 0;
            }
            else if(arr[i-2][j] * arr[i-1][j] * arr[i][j] * arr[i+1][j] * arr[i+2][j] ==32){
                cout<<"2"<<endl<<i+1<<" "<<j+1;
                return 0;
            }
        }
    }

    for(int i=0;i<19;i++){
        for(int j=2;j<17;j++){
            if(arr[i][j-2] * arr[i][j-1] * arr[i][j] * arr[i][j+1] * arr[i][j+2] ==1){
                cout<<"1"<<endl<<i+1<<" "<<j+1;
                return 0;
            }
            else if(arr[i][j-2] * arr[i][j-1] * arr[i][j] * arr[i][j+1] * arr[i][j+2] ==32){
                cout<<"2"<<endl<<i+1<<" "<<j+1;
                return 0;
            }
        }
    }

    cout<<"0";

    return 0;
}