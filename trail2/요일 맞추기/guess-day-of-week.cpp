#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int day(int a,int b){
    int day=0;
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<a-1;i++){
        day+=mon[i];
    }
    day+=b;
    return day;
}



int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    
    string week[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    
    int k=day(m2,d2)-day(m1,d1);
    if(k>=0){
        cout<<week[k%7];
    }
    else {
        k=-k;
        cout<<week[(7-k%7)%7];
    }
    
    


    return 0;
}