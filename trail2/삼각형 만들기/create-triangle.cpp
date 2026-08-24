#include <iostream>
#include <climits>

using namespace std;

int N;
int x[100];
int y[100];

bool f(int x1,int x2,int x3,int y1,int y2,int y3){
    if(x1==x2 && x2==x3) return false;
    else if(y1==y2 && y2==y3) return false;
    else if((x1==x2 || x2==x3 || x3==x1) && (y1==y2 || y2==y3 || y3==y1)) return true;
    else return false;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }


    int tri=0;

    for(int i=0;i<N;i++){        
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                if(f(x[i],x[j],x[k],y[i],y[j],y[k])){
                    int minx=min(min(x[i],x[j]),x[k]);
                    int maxx=max(max(x[i],x[j]),x[k]);
                    int miny=min(min(y[i],y[j]),y[k]);
                    int maxy=max(max(y[i],y[j]),y[k]);
                    tri=max(tri,(maxx-minx)*(maxy-miny));
                }
                
            }
        }    
    }

    cout<<tri;

    // Please write your code here.

    return 0;
}