#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt=0;
    
    for(int i=0;i<n;i++){
        double sum=0;
        int t=0;

        for(int j=i;j<n;j++){
            sum+=arr[j];
            t++;

            for(int k=i;k<j+1;k++){
                if(arr[k]==sum/t){
                    cnt++;
                    break;
                }
            }
        }

    }

    cout<<cnt;

    return 0;
}