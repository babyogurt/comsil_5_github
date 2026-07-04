#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[3]={};
    int brr[3]={};
    int crr[4]={};

    for(int i=0;i<3;i++){
        cin>>arr[i]>>brr[i];
    }

    
        for(int j=0;j<3;j++){
            if(arr[j]=='Y' && brr[j]>=37){
                crr[0]++;
            }
            else if(arr[j]=='N' && brr[j]>=37){
                crr[1]++;
            }
            else if(arr[j]=='Y' && brr[j]<37){
                crr[2]++;
            }
            else crr[3]++;
        }

        for(int i=0;i<4;i++){
            cout<<crr[i]<<" ";
        }

        if(crr[0]>=2) cout<<'E';
        
    


    return 0;
}