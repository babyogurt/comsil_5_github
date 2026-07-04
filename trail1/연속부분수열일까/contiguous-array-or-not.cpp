#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n1,n2;
    cin>>n1>>n2;

    int a[n1],b[n2];

    for(int i=0;i<n1;i++){
        cin>>a[i];
    }

    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
int k=0;
    for(int i=0;i<n1;i++){
        if(a[i]==b[0]){
            
            for(int idx=i;idx<i+n2;idx++){
                if(a[idx]==b[idx-i]){
                    k=1;
                }
                else { k=0; break;}

            
            }
            
        }if(k==1) break;
        else continue;
        
    }
    if(k==0) cout<<"No";
    else cout<<"Yes";
    return 0;
}