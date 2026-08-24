#include <iostream>

using namespace std;

int n;
int a[10], b[10], c[10];

int digit(int num, int pos) {
    if (pos == 0) return num / 100;
    if (pos == 1) return (num / 10) % 10;
    return num % 10;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    // Please write your code here.
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            for(int k=1;k<=9;k++){

            }
        }
    }
    int count = 0;

    for (int x = 1; x <= 9; x++) {
        for (int y = 1; y <= 9; y++) {
            if (y == x) continue;
            for (int z = 1; z <= 9; z++) {
                if (z == x || z == y) continue;

                int candDigits[3] = { x, y, z };
                bool valid = true;

                for (int i = 0; i < n; i++) {
                    int strike = 0, ball = 0;
                    int guessDigits[3] = { digit(a[i], 0), digit(a[i], 1), digit(a[i], 2) };

                    for (int p = 0; p < 3; p++) {
                        if (guessDigits[p] == candDigits[p]) {
                            strike++;
                        } else {
                            for (int q = 0; q < 3; q++) {
                                if (guessDigits[p] == candDigits[q]) {
                                    ball++;
                                    break;
                                }
                            }
                        }
                    }

                    if (strike != b[i] || ball != c[i]) {
                        valid = false;
                        break;
                    }
                }

                if (valid) count++;
            }
        }
    }

    cout << count << endl;
    

    return 0;
}