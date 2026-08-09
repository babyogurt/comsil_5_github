#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int live[101];

    for(int i=0;i<n;i++){
        cin>>live[i];
    }

    int Min=INT_MAX;


    for(int i=0;i<n;i++){
        int d=0;
        for(int j=0;j<n;j++){
            d+=live[j]*abs(j-i);
        }

        Min=min(Min,d);
    }

    cout<<Min;
    return 0;
}