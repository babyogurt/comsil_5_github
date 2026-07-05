#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2][4];

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    double sum1[2]={},sum2[4]={},sum;
    double avg1,avg2,avg;

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            sum1[i]+=arr[i][j];
            sum+=arr[i][j];
        }
    }
    for(int j=0;j<4;j++){
        for(int i=0;i<2;i++){
            sum2[j]+=arr[i][j];
        }
    }
    

    cout<<fixed;
    cout.precision(1);

    for(int i=0;i<2;i++){
        cout<<sum1[i]/4<<" ";
    }
    cout<<endl;
    for(int j=0;j<4;j++){
        cout<<sum2[j]/2<<" ";
    }
    cout<<endl;
    cout<<sum/8;
    

    return 0;
}