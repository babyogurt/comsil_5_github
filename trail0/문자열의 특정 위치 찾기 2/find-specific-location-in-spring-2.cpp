#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a[5]={"apple","banana","grape","blueberry","orange"};

    char c;
    cin>>c;
    int cnt=0;

    for(int i=0;i<5;i++){
        if(a[i][2]==c || a[i][3]==c){
            cnt++;
            cout<<a[i]<<endl;
        }
    }

    cout<<cnt;
    return 0;
}