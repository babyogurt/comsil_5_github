#include <iostream>
#include <climits>

using namespace std;

int n;
int x[101], y[101];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int dis=INT_MAX;

    // Please write your code here.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            dis=min(dis,(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
        }
    }

    cout<<dis;

    return 0;
}