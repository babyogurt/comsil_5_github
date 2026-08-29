#include <iostream>

using namespace std;

int x1, y1, x2, y2;
int a1, b1, a2, b2;

int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    bool inter = true;

    if(x2<a1 || a2<x1 || b2<y1 || y2<b1) inter=false;

    if(inter) cout<<"overlapping";
    else cout<<"nonoverlapping";    

    // Please write your code here.

    return 0;
}