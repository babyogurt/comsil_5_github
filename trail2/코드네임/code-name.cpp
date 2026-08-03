#include <iostream>
using namespace std;

class Spy{
    public:
        string codename;
        int point;
    Spy(string codename, int point){
        this->codename=codename;
        this->point=point;
    }

    Spy() {};
};

int main() {
    // Please write your code here.

    string codename;
    int point;

    Spy Spies[5];

    for(int i=0;i<5;i++){
        cin>>Spies[i].codename>>Spies[i].point;


    }

    int min=0;

    for(int i=0;i<5;i++){
        if(Spies[min].point>Spies[i].point){
            min=i;
        }
    }

    cout<<Spies[min].codename<<" "<<Spies[min].point;



    return 0;
}