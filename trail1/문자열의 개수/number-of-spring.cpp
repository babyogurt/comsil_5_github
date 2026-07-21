#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    int cnt=0;
    string arr[200];

    while(s!="0"){

        arr[cnt]=s;
        cnt++;

        cin>>s;
        
    }
    cout<<cnt<<endl;
    for(int i=0;i<=cnt;i++){
        if(i%2==0){
            cout<<arr[i]<<endl;
        }
    }



    return 0;
}