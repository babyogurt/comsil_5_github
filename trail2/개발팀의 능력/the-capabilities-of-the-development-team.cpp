#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;


int arr[5];




int main() {
    // 입력
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    
    // 첫 번째 팀원을 만들어줍니다.
    int min_diff = INT_MAX;
    for(int i = 0; i < 5; i++)
        for(int j = i + 1; j < 5; j++)
            
            // 두 번째 팀원을 만들어줍니다.
            for(int k = 0; k < 5; k++)
                for(int l = k + 1; l < 5; l++) {
                    //첫 번째 팀원과 두 번째 팀원이 겹치는지 여부를 확인합니다.
                    if(k == i || k == j || l == i || l == j)
                        continue;
                    int last = -1;
                    for (int p = 0; p < 5; p++) {
                        if (p != i && p != j && p != k && p != l) {
                            last = p;
                            break;
                        }
                    }

                    int sum1 = arr[i] + arr[j];
                    int sum2 = arr[k] + arr[l];
                    int sum3 = arr[last];

                    // 조건: 세 팀의 능력치가 전부 달라야 함
                    if (sum1 == sum2 || sum2 == sum3 || sum1 == sum3)
                        continue;

                    int maxTeam = max({sum1, sum2, sum3});
                    int minTeam = min({sum1, sum2, sum3});

                    min_diff = min(min_diff, maxTeam - minTeam);
                }
    
     if (min_diff == INT_MAX)
        cout << -1;
    else
        cout << min_diff;
    return 0;
}
