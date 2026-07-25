#include <iostream>
using namespace std;

int Total(int a[],int n, int m){
    int sum=a[m-1];

    while(m!=1){
        if(m%2==0) m/=2;
        else m-=1;

    sum+=a[m-1];
    }
    return sum;
    
}

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;

    int a[100];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    

    cout<<Total(a,n,m);

    return 0;
}