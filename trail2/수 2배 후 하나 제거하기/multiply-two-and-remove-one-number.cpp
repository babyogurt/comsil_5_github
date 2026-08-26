#include <iostream>
#include <climits>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m=INT_MAX;

    for(int i=0;i<n;i++){
        arr[i]*=2;
        

        for(int j=0;j<n;j++){
            
            int sum =0;
            int real[100]={};
            int ind=0;

            for(int k=0;k<n;k++){
                if(j==k) continue;
                else {
                    real[ind++]=arr[k];
                }                         
            }
            for(int k=0;k<ind-1;k++){
                sum+=abs(real[k+1]-real[k]);
            }
        
        m=min(m,sum);
        
        }
        arr[i]/=2;
    }

    cout<<m;

    // Please write your code here.

    return 0;
}