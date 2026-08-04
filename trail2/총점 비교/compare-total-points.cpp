#include <iostream>
#include <algorithm>
using namespace std;

class Grade{
    public:
        string name;
        int s1,s2,s3;
    Grade(string name,int s1,int s2,int s3){
        this->name=name;
        this->s1=s1;
        this->s2=s2;
        this->s3=s3;
    }
    Grade(){};
};

bool cmp(Grade a,Grade b){
    return a.s1+a.s2+a.s3<b.s1+b.s2+b.s3;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    string name;
    int s1,s2,s3;

    Grade grade[100];

    for(int i=0;i<n;i++){
        cin>>name>>s1>>s2>>s3;
        grade[i]=Grade(name,s1,s2,s3);
    }

    sort(grade,grade+n,cmp);

    for(int i=0;i<n;i++){
        cout<<grade[i].name<<" "<<grade[i].s1<<" "<<grade[i].s2<<" "<<grade[i].s3<<endl;
   }
    return 0;
}