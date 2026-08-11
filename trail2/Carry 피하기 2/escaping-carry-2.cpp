#include <iostream>
#include <algorithm>
using namespace std;

bool Carry(int a,int b,int c){

    int m=max(max(a,b),c);
    
        while(m){
            if(a%10+b%10+c%10 >= 10) return 0;
            a/=10;
            b/=10;
            c/=10;
            m/=10;
        }
        return 1;
}
    


int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int m=-1;

    int arr[21];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(Carry(arr[i],arr[j],arr[k])){
                    m=max(arr[i]+arr[j]+arr[k],m);
                }
            }
        }
    }

    cout<<m;
    return 0;
}