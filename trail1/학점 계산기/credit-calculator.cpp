#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    double arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    double m=0;
    double s=0;

    for(int i=0;i<N;i++){
        s+=arr[i];
    }

    m=s/N;
    cout<<fixed;
    cout.precision(1);
    cout<<m<<endl;

    if(m>=4.0){
        cout<<"Perfect";
    }
    else if(m>=3.0){
        cout<<"Good";
    }
    else cout<< "Poor";

    return 0;
}