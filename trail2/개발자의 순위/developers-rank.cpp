#include <iostream>
using namespace std;

int K, N;
int rank_[11][21];   // rank_[p][dev] = p번째 경기에서 dev번 개발자의 등수

int main() {
    cin >> K >> N;

    for (int p = 0; p < K; p++) {
        for (int i = 0; i < N; i++) {
            int dev;
            cin >> dev;              // i번째로 입력된 건 "i+1등을 한 개발자 번호"
            rank_[p][dev] = i + 1;   // 그 개발자의 등수를 저장 (i는 0부터 시작하니 +1)
        }
    }

    int cnt = 0;

    for (int a = 1; a <= N; a++) {           // 개발자 번호가 1번부터 시작한다고 가정
        for (int b = 1; b <= N; b++) {
            if (a == b) continue;

            bool alwaysHigher = true;

            for (int p = 0; p < K; p++) {
                if (!(rank_[p][a] < rank_[p][b])) {  // 등수 숫자가 작을수록 높은 순위
                    alwaysHigher = false;
                    break;
                }
            }

            if (alwaysHigher) cnt++;
        }
    }

    cout << cnt;

    return 0;
}

