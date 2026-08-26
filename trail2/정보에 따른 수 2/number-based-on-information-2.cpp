#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int T, a, b;
char c[100];
int x[100];

int main() {
    cin >> T >> a >> b;

    for (int i = 0; i < T; i++) {
        cin >> c[i] >> x[i];
    }

    int cnt=0;

    for(int k=a;k<=b;k++){
        
        int d1=INT_MAX;
        int d2=INT_MAX;

        for(int i=0;i<=T;i++){
        
        if(c[i]=='S'){
            d1=min(abs(x[i]-k),d1);
        }
        else d2=min(abs(x[i]-k),d2);
        }

        if(d1<=d2) cnt++;
        

    }

    cout<<cnt;

    
    // Please write your code here.

    return 0;
}