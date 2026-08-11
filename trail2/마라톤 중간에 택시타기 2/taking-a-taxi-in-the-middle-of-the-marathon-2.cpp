#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int x[101],y[101];

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    int max=0;
    int loca;


    for(int i=1;i<n-1;i++){
        int dis=abs(x[i]-x[i+1])+abs(y[i]-y[i+1])+abs(x[i]-x[i-1])+abs(y[i]-y[i-1])-abs(x[i-1]-x[i+1])-abs(y[i-1]-y[i+1]);

        if(dis>max) {
            max=dis;
            loca=i;
        }

    }

    int gogo=0;

    for(int i=1;i<n;i++){
        if(i==loca) {
            gogo+=abs(x[i+1]-x[i-1])+abs(y[i+1]-y[i-1]);
            i++;
        }
        else{
            gogo+=abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);
        }       
    }

    cout<<gogo;
    return 0;
}