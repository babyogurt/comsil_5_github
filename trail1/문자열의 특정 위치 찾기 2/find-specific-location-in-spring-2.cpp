#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr[5]={"apple", "banana", "grape", "blueberry", "orange"};
    
    char c;
    cin>>c;
    
    int cnt=0;

    for(int i=0;i<5;i++){
        for(int j=2;j<4;j++){
            if(arr[i][j]==c) {
                cout<<arr[i]<<endl;
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}