#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person{
    public:
        string n;
        int h,w;
    Person(string name,int height,int weight){
        this->n=name;
        this->h=height;
        this->w=weight;
    }
    Person(){}
};

bool cmp(Person a,Person b){
    return a.h<b.h;
}

int main() {
    // Please write your code here.
    string name;
    int height,weight;
    int n;
    cin>>n;

    Person person[100];

    for(int i=0;i<n;i++){
        cin>>name>>height>>weight;

        person[i]=Person(name,height,weight);
    }

    sort(person,person+n,cmp);
    

    for(int i=0;i<n;i++){
        cout<<person[i].n<<" "<<person[i].h<<" "<<person[i].w<<endl;
    }
    return 0;
}