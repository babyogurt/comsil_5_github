#include <iostream>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

// 초 단위 위치를 기록할 넉넉한 배열 (최대 100만 초)
int pos_a[1000000];
int pos_b[1000000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];
    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // 1. A의 초 단위 이동 경로 기록
    int cur = 0;
    int idx = 0;
    for (int i = 0; i < n; i++) {
        char direction = d[i];
        int time = t[i];

        for (int j = 0; j < time; j++) {
            if (direction == 'R') cur++;
            else if (direction == 'L') cur--;
            pos_a[idx++] = cur;
        }
    }
    int total_a = idx; // A가 움직인 총 시간

    // 2. B의 초 단위 이동 경로 기록
    cur = 0;
    idx = 0;
    for (int i = 0; i < m; i++) {
        char direction = d2[i];
        int time = t2[i];

        for (int j = 0; j < time; j++) {
            if (direction == 'R') cur++;
            else if (direction == 'L') cur--;
            pos_b[idx++] = cur;
        }
    }
    int total_b = idx; // B가 움직인 총 시간

    // 3. 매 초마다 위치를 비교하여 최초로 만나는 시간 찾기
    int meet = -1;
    for (int i = 0; i < total_a; i++) {
        if (pos_a[i] == pos_b[i]) {
            meet = i + 1; // 0번째 인덱스는 1초 뒤를 의미합니다.
            break;
        }
    }

    cout << meet;

    return 0;
}