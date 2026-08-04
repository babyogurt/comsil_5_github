#include <iostream>
#include <algorithm>
using namespace std;

class Arr{
    public:
        int a,num,re;
    Arr(int a,int num,int re){
        this->a=a;
        this->num=num;
        this->re=re;
    }
    Arr(){};
};

bool cmp1(Arr a,Arr b){
    return make_tuple(a.a,a.num)<make_tuple(b.a,b.num);
};

bool cmp2(Arr a,Arr b){
    return a.num<b.num;
};

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int a;

    Arr arr[1001];

    for(int i=0;i<n;i++){
        cin>>a;
        arr[i]=Arr(a,i+1,-1);
    }

    sort(arr,arr+n,cmp1);

    for(int i=0;i<n;i++){
        arr[i].re=i+1;
    }

    sort(arr,arr+n,cmp2);
    for(int i=0;i<n;i++){
        cout<<arr[i].re<<" ";
    }
    return 0;
}