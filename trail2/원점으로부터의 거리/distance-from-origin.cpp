#include <iostream>
#include <algorithm>
using namespace std;

class Distance{
    public:
        int x,y,num;
    Distance(int x,int y,int num){
        this->x=x;
        this->y=y;
        this->num=num;
    }
    Distance(){}
};

int abs(int k){
    if(k<0) return -k;
    else return k;
}

bool cmp(Distance a,Distance b){
    return make_tuple(abs(a.x)+abs(a.y),a.num)<make_tuple(abs(b.x)+abs(b.y),b.num);
};

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int x,y;
    Distance dis[1001];

    for(int i=0;i<n;i++){
        cin>>x>>y;
        dis[i]=Distance(x,y,i+1);
    }

    sort(dis,dis+n,cmp);

    for(int i=0;i<n;i++){
        cout<<dis[i].num<<endl;
    }


    return 0;
}