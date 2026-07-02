#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    double avg;

    cin>>A>>B;

    avg=(A+B)/2;

    cout<<fixed;
    cout.precision(1);

    cout<<A+B<<" "<<((double)A+B)/2;
    return 0;
}