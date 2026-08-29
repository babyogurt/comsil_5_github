#include <iostream>
#include <climits>

using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int m=INT_MAX;

    for(int x=1;x<10001;x++){

        int mx=x*2;
        int chk=false;

        for(int i=0;i<n;i++){
            if(mx>=a[i] && mx<=b[i]){
                chk=true;
            }
            else {
                chk=false;
                break;
            }

            mx*=2;
        }

        if(chk) m=min(m,x);
    }

    // Please write your code here.

    cout<<m;

    return 0;
}