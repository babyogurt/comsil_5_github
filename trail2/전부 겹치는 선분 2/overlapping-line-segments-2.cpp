#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    bool over=false;
    for(int i=0;i<n;i++){
        
        int head=0,tail=100;

        for(int j=0;j<n;j++){
            if(i==j) continue;

            head=max(head,x1[j]);
            tail=min(tail,x2[j]);
            
        }

        if(head<=tail) over=true;
    }

    if(over) cout<<"Yes";
    else cout<<"No";
    return 0;
}