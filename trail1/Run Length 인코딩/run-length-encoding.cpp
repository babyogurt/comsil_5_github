#include <iostream>
#include <string>

using namespace std;

string A;
string k;

int main() {
    cin >> A;

    // Please write your code here.
    int len=A.length();
    int cnt=1;
   

    for(int i=0;i<len;i++){
        
        if(A[i]==A[i+1]){
            cnt++;
        }
        else{
            k+=A[i];
            k+=std::to_string(cnt);
            cnt=1;
            
        }
    }
    cout<<k.length()<<endl<<k;



    return 0;
}
