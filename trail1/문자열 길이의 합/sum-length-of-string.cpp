#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt=0;
    int sum=0;

    string arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i][0]=='a'){
            cnt++;
        }
        sum+=arr[i].length();
    }
    cout<<sum<<" "<<cnt;
    return 0;
}