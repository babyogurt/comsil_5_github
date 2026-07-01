#include <iostream>
//#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int s=0;
    float m=0;
    int i=0;

    while(arr[i]<250){
        s+=arr[i];
        i++;
    }

    m=(float)s/i;
    cout << fixed;
    cout.precision(1);
    cout<<s<<" "<<m;
    

    return 0;
}