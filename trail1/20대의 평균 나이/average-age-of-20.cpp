#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0,sum=0;
    while(1){
        cin>>n;
        if(n>=30 || n <20){
            break;
        }
        cnt++;
        sum+=n;

    }
    cout<<fixed;
    cout.precision(2);
    cout<<(double)sum/cnt;
    return 0;
}