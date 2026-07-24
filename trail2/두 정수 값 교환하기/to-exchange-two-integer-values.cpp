#include <iostream>

using namespace std;

int n, m;

void Swap(int &n,int &m){
    int tmp=n;
    n=m;
    m=tmp;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    Swap(n,m);
    cout<<n<<" "<<m;

    return 0;
}