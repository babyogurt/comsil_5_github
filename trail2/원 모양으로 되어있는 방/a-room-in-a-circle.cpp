#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int p[1004];

    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    int Min=INT_MAX;

    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=0;j<n;j++){
            ans+=p[j]*((n+j-i)%n);
        }
        if(Min>ans) Min=ans;

    }
    

    cout<<Min;
    return 0;
}