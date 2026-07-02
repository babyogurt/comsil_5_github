#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];

    int cnt_3=0;
    int cnt_5=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
        if(a[i]%3==0) cnt_3++;
        if(a[i]%5==0) cnt_5++;
    }
    cout<<cnt_3<<" "<<cnt_5;

    return 0;
}