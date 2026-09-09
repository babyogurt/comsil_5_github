#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N;
string seats;

int main() {
    cin >> N;
    cin >> seats;

    int answer = -1;

    for (int k = 0; k < N; k++) {
        if (seats[k] == '1') continue;

        seats[k] = '1'; // 임시로 앉혀보기

        int minGap = 1000000;
        int prev = -1;
        for (int j = 0; j < N; j++) {
            if (seats[j] == '1') {
                if (prev != -1) minGap = min(minGap, j - prev);
                prev = j;
            }
        }

        seats[k] = '0'; // 원상복구

        answer = max(answer, minGap);
    }

    cout << answer << endl;
    return 0;
}