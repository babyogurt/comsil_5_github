#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word1;
string word2;

int main() {
    cin >> word1;
    cin >> word2;

    // Please write your code here.

    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());

    int len1=word1.length();
    int len2=word2.length();

    int len;
    if(len1>len2) len=len1;
    else len=len2;

    for(int i=0;i<len;i++){
        if(word1[i]!=word2[i]) {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";

    return 0;
}
