#include <iostream>
#include <string>
#include <climits>
#include <set>

using namespace std;

int N;
string str;

int main() {
    cin >> N;
    cin >> str;

    // Please write your code here.
    for(int L=1;L<101;L++){
        set<string> seen;
        bool ok = true;
        for(int i=0;i+L<=N;i++){
            string sub = str.substr(i, L);
            if(seen.count(sub)){
                ok = false;
                break;
            }
            seen.insert(sub);
        }
        if(ok){
            cout << L << endl;
            return 0;
        }
    }

    return 0;
}