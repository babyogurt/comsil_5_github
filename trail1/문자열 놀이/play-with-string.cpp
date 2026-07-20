#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    int q;
    cin>>q;
    int n,n1,n2;
    char c1,c2;
    string copy=s;
    int len=s.length();

    for(int i=0;i<q;i++){
        cin>>n;
        if(n==1){
            cin>>n1>>n2;
            int tmp=s[n1-1];
            s[n1-1]=s[n2-1];
            s[n2-1]=tmp;
        }
        if(n==2){
            cin>>c1>>c2;
            for(int j=0;j<len;j++){
                if(s[j]==c1){
                    s[j]=c2;
                }
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}