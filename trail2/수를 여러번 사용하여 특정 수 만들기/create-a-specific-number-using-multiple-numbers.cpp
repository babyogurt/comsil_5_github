#include <iostream>
#include <climits>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;

    int m=0;
    

    for(int i=0;i<1001;i++){
        for(int j=0;j<1001;j++){
            int num;

            if(A*i+B*j<=C) {
                num=A*i+B*j; 
                m=max(m,num);
                }


           
        }
    }

    cout<<m;

    // Please write your code here.

    return 0;
}