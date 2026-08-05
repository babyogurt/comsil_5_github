#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int x[200]={};

    int a;
    char c;

    int k=100;

    

    for(int i=0;i<n;i++){
        cin>>a>>c;

        if(c=='R'){
            for(int j=k;j<k+a;j++){
                x[j]++;
            }
            k=k+a;
        }

        if(c=='L'){
            for(int j=k-1;j>=k-a;j--){
                x[j]++;
            }
            k=k-a;
        }
    }

    int cnt=0;

    for(int i=0;i<200;i++){
        if(x[i]>1){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}