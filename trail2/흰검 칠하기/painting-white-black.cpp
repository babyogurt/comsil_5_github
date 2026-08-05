#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int arr[200000]={};
    int black[200000]={};
    int white[200000]={};
    int brr[200000]={};
    int cur=100000;
    
    for(int i=0;i<n;i++){
        if(dir[i]=='R'){
            for(int j=cur;j<cur+x[i];j++){
                arr[j]++;
                brr[j]=1;
                black[j]++;
                
            }
            cur=cur+x[i]-1;
        }
        if(dir[i]=='L'){
            for(int j=cur;j>cur-x[i];j--){
                arr[j]++;
                brr[j]=2;
                white[j]++;
            }
            cur=cur-x[i]+1;
        }
    }

    int cnt_b=0,cnt_w=0,cnt_g=0;


    for(int i=0;i<200000;i++){
        if(white[i]>=2 && black[i]>=2) cnt_g++;
        else if(brr[i]==1) cnt_b++;
        else if(brr[i]==2) cnt_w++;
    }    
    cout<<cnt_w<<" "<<cnt_b<<" "<<cnt_g;
    // Please write your code here.

    return 0;
}