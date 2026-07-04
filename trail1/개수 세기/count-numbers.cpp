#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,M;
    cin>>N>>M;

    int arr[N];
    int cnt=0;

    for(int i=0;i<N;i++){
        cin>>arr[i];

        if(arr[i]==M){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}