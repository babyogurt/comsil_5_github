#include <iostream>
#include <algorithm>
using namespace std;

class Subject{
    public:
        string name;
        int k,e,m;
    Subject(string name,int korean,int english,int math){
        this->name=name;
        this->k=korean;
        this->e=english;
        this->m=math;
    }
    Subject(){}
};

bool cmp(Subject a,Subject b){
    return make_tuple(a.k,a.e,a.m)>make_tuple(b.k,b.e,b.m);
};

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    string name;
    int korean,english,math;

    Subject sub[11];

    for(int i=0;i<n;i++){
        cin>>name>>korean>>english>>math;

        sub[i]=Subject(name,korean,english,math);

    }

    sort(sub,sub+n,cmp);

    for(int i=0;i<n;i++){
        cout<<sub[i].name<<" "<<sub[i].k<<" "<<sub[i].e<<" "<<sub[i].m<<endl;
    }


    return 0;
}