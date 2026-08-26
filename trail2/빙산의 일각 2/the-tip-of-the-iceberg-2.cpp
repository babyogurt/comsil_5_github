#include <iostream>
#include <climits>

using namespace std;

int n;
int h[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int hei[100]={};

    int m=0;

    // Please write your code here.
    for(int s=0;s<=1000;s++){

        int cnt=0;

        for(int i=0;i<n;i++){
            if(h[i]>s) hei[i]=1;
            else hei[i]=0;
        }

        if(hei[0]==1) cnt++;

        for(int i=1;i<n;i++){
        
            if((hei[i]==1) && hei[i]!=hei[i-1]) {    
                cnt++;
            }
        }


        m=max(m,cnt);
    }
    cout<<m;

    

    return 0;
}