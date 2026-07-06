#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int max=0;
    int k=N;

    while(k!=0){
        for(int i=0;i<k;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }

        for(int i=0;i<k;i++){
            if(arr[i]==max){
                cout<<i+1<<" ";
                k=i;
                break;
            }
        }
        max=0;
    }


    return 0;
}
