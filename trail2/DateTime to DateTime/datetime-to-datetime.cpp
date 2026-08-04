#include <iostream>
using namespace std;

int minute(int a,int b,int c){


    int min=0;
    min+=c;
    min+=b*60;
    min+=a*24*60;

    return min;
}

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;

    if(a==11){
        if(b==11){
            if(c<11) {
                cout<< "-1";
                return 0;
            }
        }
        else if(b<11) {
            cout<< "-1";
            return 0;
        }    
    }
    else if(a<11) {
        cout<< "-1";
        return 0;
    }

    cout<<minute(a,b,c)-minute(11,11,11);
    return 0;
}