#include <iostream>
using namespace std;

int a, b, x, y;

int main() {
    cin >> a >> b >> x >> y;

    int step1 = 0, step2 = 0, step3 = 0;

    // 직진 거리: A -> B
    for (int i = a; i != b; i += (a < b ? 1 : -1)) step1++;

    // 경로 1: A -> x -> (순간이동) -> y -> B
    for (int i = a; i != x; i += (a < x ? 1 : -1)) step2++;
    for (int i = y; i != b; i += (y < b ? 1 : -1)) step2++;

    // 경로 2: A -> y -> (순간이동) -> x -> B
    for (int i = a; i != y; i += (a < y ? 1 : -1)) step3++;
    for (int i = x; i != b; i += (x < b ? 1 : -1)) step3++;

    cout << min(min(step1, step2), step3);

    return 0;
}