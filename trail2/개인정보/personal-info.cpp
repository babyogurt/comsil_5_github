#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int h;
        double w;
    Person(string name,int h,double w){
        this->name=name;
        this->h=h;
        this->w=w;
    }
    Person(){}; 
};

bool cmp1(Person a,Person b){
    return a.name<b.name;
};

bool cmp2(Person a, Person b){
    return a.h>b.h;
};

int main() {
    // Please write your code here.
    Person per[5];

    string name;
    int h;
    double w;

    for(int i=0;i<5;i++){
        cin>>name>>h>>w;
        per[i]=Person(name,h,w);
    }

    cout<<fixed;
    cout.precision(1);

    sort(per,per+5,cmp1);
    cout<<"name"<<endl;
    for(int i=0;i<5;i++){
        cout<<per[i].name<<" "<<per[i].h<<" "<<per[i].w<<endl;
    }

    sort(per,per+5,cmp2);
    cout<<endl<<"height"<<endl;
    for(int i=0;i<5;i++){
        cout<<per[i].name<<" "<<per[i].h<<" "<<per[i].w<<endl;
    }

    return 0;
}