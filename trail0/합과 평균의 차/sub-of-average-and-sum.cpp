#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b,c;
   
    double avg;

    cin>>a>>b>>c;
    int sum=a+b+c;
    avg=sum/3;
    
    cout<<sum<<endl;
    cout<<avg<<endl;
    cout<<sum-avg;
    return 0;
}