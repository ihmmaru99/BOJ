#include <iostream>

using namespace std;

int dp[10001] = {0, };
int num[101];

int main(){
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> num[i];
    dp[0] = 1;
    for(int i=0; i<n; i++){
        for(int j =num[i]; j<=k; j++){
            dp[j] += dp[j-num[i]];
        }
    }
    cout << dp[k] << '\n';
    return 0;
}
