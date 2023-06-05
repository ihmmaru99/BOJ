#include <iostream>

using namespace std;

int t, n;
int cnt=0;
int dp[12] = {1, 2, 4, };

int main(){
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cnt = 0;
        for(int i=3; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        cout << dp[n-1] << '\n';
    }
}