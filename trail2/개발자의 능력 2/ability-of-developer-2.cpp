#include <iostream>
#include <algorithm>
using namespace std;

int score[6];

int main() {
    for (int i = 0; i < 6; i++) cin >> score[i];

    int answer = 1000000; // 아주 큰 값으로 시작

    // 6명 중 2명씩 짝지어서 3팀 만들기 (모든 경우 다 해보기)
    for (int a = 0; a < 6; a++)
    for (int b = a+1; b < 6; b++)         // 첫 팀: a, b
    for (int c = 0; c < 6; c++)
    for (int d = c+1; d < 6; d++) {        // 둘째 팀: c, d
        // a,b,c,d가 서로 겹치면 안 됨
        if (c==a || c==b || d==a || d==b) continue;

        // 나머지 두 명이 자동으로 셋째 팀
        int e = -1, f = -1;
        for (int i = 0; i < 6; i++) {
            if (i!=a && i!=b && i!=c && i!=d) {
                if (e == -1) e = i;
                else f = i;
            }
        }

        int team1 = score[a] + score[b];
        int team2 = score[c] + score[d];
        int team3 = score[e] + score[f];

        int maxTeam = max({team1, team2, team3});
        int minTeam = min({team1, team2, team3});

        answer = min(answer, maxTeam - minTeam);
    }

    cout << answer << endl;
    return 0;
}