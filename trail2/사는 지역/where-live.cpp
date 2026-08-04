#include <iostream>
#include <string>

#define MAX_N 10

using namespace std;

int n;
//string name[MAX_N], street_address[MAX_N], region[MAX_N];


class Address{
    public:
        string name,add,region;

    Address(string name,string add, string region){
        this->name=name;
        this->add=add;
        this->region=region;
    }

    Address(){};

};



int main() {
    cin >> n;
    
    Address add1[100];

    for (int i = 0; i < n; i++) {
        cin >> add1[i].name;
        cin >> add1[i].add;
        cin >> add1[i].region;
    }

    // Please write your code here.
    int k=0;

    for(int i=0;i<n;i++){
        if(add1[i].name>add1[k].name){
            k=i;
        }
    }

    cout<<"name "<<add1[k].name<<endl;
    cout<<"addr "<<add1[k].add<<endl;
    cout<<"city "<<add1[k].region;

    return 0;
}