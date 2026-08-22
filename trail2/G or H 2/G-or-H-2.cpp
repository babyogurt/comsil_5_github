#include <iostream>

using namespace std;

int N;
int pos[100];
char alpha[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];
    }

    // Please write your code here.
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (pos[j] > pos[j + 1]) {
                int tp = pos[j]; pos[j] = pos[j+1]; pos[j+1] = tp;
                char ta = alpha[j]; alpha[j] = alpha[j+1]; alpha[j+1] = ta;
            }
        }
    }
    
    int m = 0;

    for (int i = 0; i < N; i++) {
        int cntG = 0, cntH = 0;
        for (int j = i; j < N; j++) {
            if (alpha[j] == 'G') cntG++;
            else if (alpha[j] == 'H') cntH++;

            if (cntG == 0 || cntH == 0 || cntG == cntH) {
                int size = pos[j] - pos[i];
                m = max(m, size);
            }
        }
    }

    cout << m;


    return 0;
}