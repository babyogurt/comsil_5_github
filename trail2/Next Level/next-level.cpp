#include <iostream>
using namespace std;

class Info{
    public:
        string id;
        int lv;

    Info(string id_="codetree",int lv_=10){
        this->id = id_;
        this->lv = lv_;
    }
};

int main() {
    // Please write your code here.
    string id;
    int lv;

    cin>>id>>lv;

    Info Info1=Info();

    cout<<"user "<<Info1.id<<" lv "<<Info1.lv<<endl;
    
    Info Info2=Info(id,lv);

    cout<<"user "<<Info2.id<<" lv "<<Info2.lv<<endl;





    return 0;
}