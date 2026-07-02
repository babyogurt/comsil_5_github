#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    
    // Please write your code here.


    cout<<N<<endl;
    while(N/M>0){
        cout<<N/M<<endl;
        N=N/M;
    }
    
    return 0;
}
