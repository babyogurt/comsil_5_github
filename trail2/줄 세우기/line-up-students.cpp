#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    public:
        int h,w,num;
    Student(int h,int w,int num){
        this->h=h;
        this->w=w;
        this->num=num;
    }
    Student(){}
};

bool cmp(Student a,Student b){
    return make_tuple(a.h,a.w,-a.num)>make_tuple(b.h,b.w,-b.num);
};

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int h,w;

    Student stu[1001];
    int num=1;

    for(int i=0;i<n;i++){
        cin>>h>>w;
        stu[i]=Student(h,w,num);
        num++;
    }

    sort(stu,stu+n,cmp);

    for(int i=0;i<n;i++){
        cout<<stu[i].h<<" "<<stu[i].w<<" "<<stu[i].num<<endl;
    }

    return 0;
}