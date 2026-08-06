#include <iostream>
#include <algorithm>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];


    int arr[2001][2001]={};

    for(int i=0;i<2;i++){
        x1[i]+=1000;
        x2[i]+=1000;
        y1[i]+=1000;
        y2[i]+=1000;
    }

    // Please write your code here.
    for(int i=x1[0];i<x2[0];i++){
        for(int j=y1[0];j<y2[0];j++){
            arr[i][j]=1;
        }
    }
    for(int i=x1[1];i<x2[1];i++){
        for(int j=y1[1];j<y2[1];j++){
            arr[i][j]=2;
        }
    }

    int min_x=2000,max_x=0,min_y=2000,max_y=0;

    

    for(int i = 0; i <= 2000; i++){
        for(int j = 0; j <= 2000; j++){
            if(arr[i][j] == 1){
                min_x = min(min_x, i);
                max_x = max(max_x, i);
                min_y = min(min_y, j);
                max_y = max(max_y, j);
            }
        }
    }

    if(min_x == 2000) {
        cout << 0;
    }

    else{
        cout<<(max_x-min_x+1)*(max_y-min_y+1);
    }
    return 0;
}