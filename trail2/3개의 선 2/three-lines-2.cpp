#include <iostream>
using namespace std;

int n;
int x[20], y[20];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int type[40], val[40]; // type 0 = 세로선(x=val), type 1 = 가로선(y=val)
    int m = 0;
    for (int i = 0; i < n; i++) {
        type[m] = 0; val[m] = x[i]; m++;
        type[m] = 1; val[m] = y[i]; m++;
    }

    bool possible = (n == 0); // 점이 없으면 무조건 가능

    for (int a = 0; a < m && !possible; a++) {
        for (int b = a; b < m && !possible; b++) {
            for (int c = b; c < m && !possible; c++) {
                bool covered = true;
                for (int i = 0; i < n; i++) {
                    bool ok = false;
                    if (type[a] == 0 ? x[i] == val[a] : y[i] == val[a]) ok = true;
                    if (type[b] == 0 ? x[i] == val[b] : y[i] == val[b]) ok = true;
                    if (type[c] == 0 ? x[i] == val[c] : y[i] == val[c]) ok = true;
                    if (!ok) { covered = false; break; }
                }
                if (covered) possible = true;
            }
        }
    }

    cout << (possible ? "1" : "0") << endl;

    return 0;
}