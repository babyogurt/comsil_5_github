#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int x=0,y=0;

    int n;
    cin>>n;

    char dir[100];
    int dis[100];

    for(int i=0;i<n;i++){
        cin>>dir[i]>>dis[i];
    }

    for(int i=0;i<n;i++){
        if(dir[i]=='N'){
            y+=dis[i];
        }
        else if(dir[i]=='E'){
            x+=dis[i];
        }
        else if(dir[i]=='S'){
            y-=dis[i];
        }
        else x-=dis[i];
    }

    cout<<x<<" "<<y;
    return 0;
}