#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    int tot1=0,tot2=0,cnt=0;
    double avg;
    for(int i=0;i<10;i++){
        cin>>a[i];
        if(i%2==1){
            tot1+=a[i];
            
        }
        if((i+1)%3==0){
            tot2+=a[i];
            cnt++;
            
        }

    }
    avg=(double)tot2/cnt;
    cout<<fixed;

    cout.precision(1);

    cout<<tot1<<" "<<avg;



    return 0;
}