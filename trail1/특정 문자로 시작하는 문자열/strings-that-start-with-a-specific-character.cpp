#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    string arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char c;
    cin>>c;

    int cnt=0;
    int sum=0;

    cout<<fixed;
    cout.precision(2);

    for(int i=0;i<n;i++){
        if(arr[i][0]==c) {
            cnt++;
            sum+=arr[i].length();
        }
    }


    cout<<cnt<<" "<<(double)sum/cnt;
    return 0;
}