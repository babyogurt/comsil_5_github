#include <iostream>

using namespace std;

int n, m;

void Swap(){
    int tmp=n;
    n=m;
    m=tmp;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    Swap();
    cout<<n<<" "<<m;

    return 0;
}