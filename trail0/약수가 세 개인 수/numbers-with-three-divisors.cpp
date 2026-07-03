#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;
    int m=0,cnt=0;

    // Please write your code here.
    for(int i=st;i<=ed;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0) cnt++;
    
        }

        if(cnt==3) m++;
        cnt=0;
    }
    cout<<m;
    return 0;
}
