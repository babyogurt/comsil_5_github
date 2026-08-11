#include <iostream>
#include <string>

using namespace std;

int BinToInt(string b) {
    int result = 0;
    for (int i = 0; i < b.length(); i++) {
        result = 2 * result + (b[i] - '0');         
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s; // 변형된 이진수 문자열을 통째로 입력받기

    int max_val = -1;
    int len = s.length();

    // 한 자리만 원래대로(혹은 다르게) 바꾸어 볼 수 있는 모든 경우 탐색
    for (int i = 0; i < len; i++) {
        string temp = s;
        
        // 현재 자리가 '1'이었다면 '0'으로 바꿔보기
        if (temp[i] == '1') {
            temp[i] = '0';
        } 
        // 현재 자리가 '0'이었다면 '1'로 바꿔보기
        else {
            temp[i] = '1';
        }

        // 10진수로 변환 후 최댓값 갱신
        int val = BinToInt(temp);
        if (val > max_val) {
            max_val = val;
        }
    }

    cout << max_val << "\n";

    return 0;
}