#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cnt++;
            if(k == i){
            }
        }
    }
    if(cnt < k)
        cout << 0;
    else
        cout << cnt;
    return 0;
}