#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    int p=0;
    string arr[100];

    for (int i = 0; i < n; i++) {
        cin >> str[i];

        if(str[i].find(t)==0){
            arr[p]=str[i];
            p++;
        }
    }

    sort(arr,arr+p);

    cout<<arr[k-1];
    
    // Please write your code here.

    return 0;
}