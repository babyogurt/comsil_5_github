#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b;
    cin >> c >> d;

    // Please write your code here.
    int clean=0;

    for(int i=0;i<100;i++){
        if(i>=a && i<b && i>=c && i<d) clean--;
        if(i>=a && i<b) clean++;
        if(i>=c && i<d) clean++;
    }

    cout<<clean;
    

    return 0;
}