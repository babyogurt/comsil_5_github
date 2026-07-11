#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int a;
    int sum=0;

    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }

    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/n;
    return 0;
}