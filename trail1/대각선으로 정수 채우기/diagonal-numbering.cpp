#include <iostream>
#include <algorithm> // max, min 함수를 사용하기 위함
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100][100] = {0};
    int num = 1;

    // 대각선의 총 개수는 (n + m - 1)개 입니다.
    // s는 행(i)과 열(j) 인덱스의 합입니다. (0 부터 n + m - 2 까지)
    for (int s = 0; s < n + m - 1; s++) {
        
        // 행(i)의 시작점 계산:
        // 열(j)은 최대 m-1까지만 가능하므로, i는 최소 s - (m - 1)부터 시작해야 합니다.
        // 배열을 벗어나지 않도록 0과 비교하여 더 큰 값을 시작 행으로 잡습니다.
        int start_row = max(0, s - (m - 1));
        
        // 행(i)의 끝점 계산:
        // 행(i)은 최대 n-1까지만 가능하므로, n-1과 s 중 더 작은 값까지만 이동합니다.
        int end_row = min(n - 1, s);

        // 구한 범위 내에서 대각선을 따라 숫자를 채웁니다.
        for (int i = start_row; i <= end_row; i++) {
            int j = s - i; // 두 인덱스의 합이 s이므로, 열(j)은 s - i 가 됩니다.
            arr[i][j] = num++;
        }
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}