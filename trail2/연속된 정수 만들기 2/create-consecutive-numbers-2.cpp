#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);

    int gap1 = a[1] - a[0] - 1;
    int gap2 = a[2] - a[1] - 1;

    int ans;
    if (gap1 == 0 && gap2 == 0) ans = 0;
    else if (gap1 == 1 || gap2 == 1) ans = 1;
    else ans = 2;

    cout << ans;
    return 0;
}