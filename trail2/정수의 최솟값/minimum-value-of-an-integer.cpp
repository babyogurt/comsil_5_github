#include <iostream>

using namespace std;

int N;

int Min(int a, int b, int c){
    int min=a;
    if(b<a) {
        min=b;
        if(c<b) min=c;
    }
    else {
        min=a;
        if(c<a) min=c;
    }

    return min;
    
}

int main() {
    //cin >> N;

    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    cout<<Min(a,b,c);


    return 0;
}