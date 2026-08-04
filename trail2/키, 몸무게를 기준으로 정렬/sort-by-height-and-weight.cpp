#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int h,w;
    Person(string name,int h,int w){
        this->name=name;
        this->h=h;
        this->w=w;
    }
    Person(){}
};

bool cmp(Person a,Person b){
    return make_tuple(a.h,-a.w)<make_tuple(b.h,-b.w);
};

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    string name;
    int h,w;

    Person per[11];

    for(int i=0;i<n;i++){
        cin>>name>>h>>w;
        per[i]=Person(name,h,w);

    }

    sort(per,per+n,cmp);

    for(int i=0;i<n;i++){
        cout<<per[i].name<<" "<<per[i].h<<" "<<per[i].w<<endl;
    }
    return 0;
}