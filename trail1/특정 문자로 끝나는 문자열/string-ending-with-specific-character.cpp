#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    char c;
    cin>>c;

    int k=0;

    for(int i=0;i<10;i++){
        if(arr[i][arr[i].length()-1]==c){
            cout<<arr[i]<<endl;
            k=1;
        }
    }
    if(k==0) cout<<"None";
    return 0;
}