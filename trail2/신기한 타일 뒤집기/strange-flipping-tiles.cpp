#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int x[1000]={};
    char d[1000]={};

    int arr[200000]={};

    int white=0;
    int black=0;
    int cur=100000;


    for(int i=0;i<n;i++){
        cin>>x[i]>>d[i];
    }

    for(int i=0;i<n;i++){
        if(d[i]=='R'){
            for(int j=cur;j<cur+x[i];j++){
                arr[j]=1;
            }
            cur=cur+x[i]-1;
        }
        else if(d[i]=='L'){
            for(int j=cur;j>cur-x[i];j--){
                arr[j]=2;
            }
            cur=cur-x[i]+1;
        }
    }


    for(int i=0;i<200000;i++){
        if(arr[i]==1) black++;
        else if(arr[i]==2) white++;
    }

    cout<<white<<" "<<black;



    return 0;
}