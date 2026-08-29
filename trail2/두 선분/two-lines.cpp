#include <iostream>

using namespace std;

int x1, x2, x3, x4;

int main() {
    cin >> x1 >> x2 >> x3 >> x4;

    // Please write your code here.
    bool inter=false;
    for(int i=x1;i<=x2;i++){
        if(i>=x3 && i<=x4){
            inter=true;
        }
    }

    if(inter) cout<<"intersecting";
    else cout<<"nonintersecting";

    return 0;
}