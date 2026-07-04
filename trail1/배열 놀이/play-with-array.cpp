#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,Q;
    cin>>N>>Q;

    int arr[100];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int q,a,b,s,e;
    int cnt=0;
    

    for(int i=0;i<Q;i++){
        cin>>q;

        if(q==1){
            cin>>a;
            cout<<arr[a-1]<<endl;
        }
        else if(q==2){
            cin>>b;
            for(int j=0;j<N;j++){
                if(arr[j]==b){
                    cout<<j+1<<endl;
                    break;
                }
                else cnt++;

                //cout<<cnt<<" ";
            }
            if(cnt==N) cout<<"0"<<endl;
            cnt=0;
        }
        else if(q==3){
            cin>>s>>e;
            //cout<<s<<"!"<<e<<"!"<<endl;
            for(int k=s-1;k<e;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}