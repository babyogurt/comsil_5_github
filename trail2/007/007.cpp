#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int time_val;

class Code{
    public:
    string s;
    char m;
    int t;

    Code(string s,char m, int t){
        this->s=s;
        this->m=m;
        this->t=t;
        
    }

};

int main() {
    cin >> secret_code >> meeting_point >> time_val;

    // Please write your code here.
    Code code1 = Code(secret_code,meeting_point,time_val);

    cout<<"secret code : "<<code1.s<<endl;
    cout<<"meeting point : "<<code1.m<<endl;
    cout<<"time : "<<code1.t;

    return 0;
}