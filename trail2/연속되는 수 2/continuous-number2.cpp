#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int x[1000];

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    int cnt=0;
    int max=0;

    for(int i=1;i<n;i++){
        if(x[i]==x[i-1]){
            cnt++;
            if(cnt>max) max=cnt;
        }
        else{
            cnt=0;
        }
    }

    cout<<max+1;
    return 0;
}