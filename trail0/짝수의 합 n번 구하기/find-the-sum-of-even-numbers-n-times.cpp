#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin>>N;

    int a,b;

    int sum=0;

    for(int i=0;i<N;i++){
        cin>>a>>b;

        for(int j=a;j<=b;j++){
            if(j%2==0){sum+=j;}
            else continue;
            
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}