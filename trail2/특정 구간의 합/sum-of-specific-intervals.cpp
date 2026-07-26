#include <iostream>

using namespace std;

int n, m;
int arr[100];

void Print(int a,int b){
    int sum=0;
    for(int i=a-1;i<b;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;

        Print(a1,a2);
    }


    // Please write your code here.

    return 0;
}