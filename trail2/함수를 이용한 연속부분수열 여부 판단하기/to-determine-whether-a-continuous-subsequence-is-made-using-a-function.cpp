#include <iostream>
#include <string>
using namespace std;

bool Part(int a[],int n,int b[],int m){
    //int len1=sizeof(a);
    //int len2=sizeof(b);

    int k=0;

    for(int i=0;i<n-m+1;i++){
        for(int j=0;j<m;j++){
            if(a[i+j]==b[j] ){
                k++;
            }
            
        }
        if(k==m) return true;
        else k=0;
    }
    return false;
}

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int A[100],B[100];

    for(int i=0;i<a;i++){
        cin>>A[i];
    }
    for(int i=0;i<b;i++){
        cin>>B[i];
    }

    if(Part(A,a,B,b)) cout<<"Yes";
    else cout<<"No";



    return 0;
}