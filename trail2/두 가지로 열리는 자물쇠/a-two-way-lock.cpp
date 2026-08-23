#include <iostream>

using namespace std;

int N;
int a1, b1, c1;
int a2, b2, c2;

bool f(int i, int j, int k, int a, int b, int c){

    if((abs(i-a)<=2 || abs(i-a)>=N-2) && (abs(j-b)<=2  || abs(j-b)>=N-2) && (abs(k-c)<=2 || abs(k-c)>=N-2)){
        return true;
    }
    else return false;
}

int main() {
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    // Please write your code here.
    int cnt=0;

        for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            for(int k=1;k<=N;k++){
                if(f(i,j,k,a1,b1,c1)||f(i,j,k,a2,b2,c2)){
                    cnt++;
                }
            }
        }
    }

    cout<<cnt;

    return 0;
}