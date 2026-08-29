#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long X;
    cin >> X;

    long long k = (long long)sqrt((double)X);
    while (k * k > X) k--;          // 부동소수점 오차 보정
    while ((k + 1) * (k + 1) <= X) k++;

    long long n;
    if (k * k == X) n = 2 * k - 1;
    else if (k * (k + 1) >= X) n = 2 * k;
    else n = 2 * k + 1;

    cout << n;

    return 0;
}
