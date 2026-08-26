#include <iostream>

using namespace std;

int X, Y;

bool inter(int n){
    string s=to_string(n);
    int len=s.length();

    int freq[10]={};
     for(char c : s) freq[c - '0']++;

    int maxFreq = 0;
    for(int i = 0; i < 10; i++) maxFreq = max(maxFreq, freq[i]);

    return (len - maxFreq == 1);
}

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int cnt=0;
    for(int i=X;i<=Y;i++){
        if(inter(i)) cnt++;
    }

    cout<<cnt;

    return 0;
}