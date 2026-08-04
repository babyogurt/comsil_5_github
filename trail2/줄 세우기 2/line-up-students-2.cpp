#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        int h,w,num;
    Person(int h,int w,int num){
        this->h=h;
        this->w=w;
        this->num=num;
    }
    Person (){}
};

bool cmp(Person a, Person b){
    return make_tuple(a.h,-a.w)<make_tuple(b.h,-b.w);
};

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    
    Person per[1001];


    int h,w;
    for(int i=0;i<n;i++){
        cin>>h>>w;
        per[i]=Person(h,w,i+1);
    }

    sort(per,per+n,cmp);

    for(int i=0;i<n;i++){
        cout<<per[i].h<<" "<<per[i].w<<" "<<per[i].num<<endl;
    }
    return 0;
}