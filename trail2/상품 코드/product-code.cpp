#include <iostream>
using namespace std;

class product{
    public:
        string name;
        int code;
    product(string name="codetree",int code=50){
        this->name=name;
        this->code=code;
    }
};

int main() {
    // Please write your code here.
    string code;
    int n;

    cin>>code>>n;

    product pro1=product();
    product pro2=product(code,n);
    cout<<"product "<<pro1.code<<" is "<<pro1.name<<endl;
    cout<<"product "<<pro2.code<<" is "<<pro2.name;



    

    return 0;
}