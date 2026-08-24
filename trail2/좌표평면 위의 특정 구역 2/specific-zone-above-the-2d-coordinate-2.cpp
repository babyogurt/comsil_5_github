#include <iostream>
#include <climits>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    //int dim[100]={};
    

    int square=INT_MAX;

    for(int i=0;i<N;i++){
        int minx=40000, miny=40000;
        int maxx=1,maxy=1;
        for(int j=0;j<N;j++){
            if(i==j) continue;

            minx=min(minx,x[j]);
            maxx=max(maxx,x[j]);
            miny=min(miny,y[j]);
            maxy=max(maxy,y[j]);

        }
        square=min(square,(maxx-minx)*(maxy-miny));
    }

    cout<<square;

    // Please write your code here.

    return 0;
}