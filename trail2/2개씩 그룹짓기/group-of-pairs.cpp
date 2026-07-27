#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    sort(nums,nums+2*N);


    int A[1000];

    for(int i=0;i<N;i++){
        A[i]=nums[i]+nums[2*N-i-1];
    }

    
    sort(A,A+N);

    cout<<A[N-1];

    return 0;
}
