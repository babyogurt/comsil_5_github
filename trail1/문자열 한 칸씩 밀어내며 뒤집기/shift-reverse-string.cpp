#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int q;

   
    

    cin>>s>>q;
    int n; 
    int len=s.length();

    for(int i=0;i<q;i++){
        cin>>n;
        string str;
        if(n==1){
            str=s.substr(1,len-1)+s.substr(0,1);
            
        }
        else if(n==2){
            str=s.substr(len-1,1)+s.substr(0,len-1);
            
        }
        else if(n==3){
            for(int i=len-1;i>=0;i--){
                str+=s[i];
            }
        }
        cout<<str<<endl;
        s=str;
        
    }

    
    return 0;
}