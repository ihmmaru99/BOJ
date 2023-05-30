#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int don[10];

int main(){
    int n, k;
    int cnt =0;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> don[i];
    }
    sort(don, don+n);
    while(k > 0){
        cnt += k/don[n-1];
        k %= don[n-1];
        n--;
    }
    cout << cnt;
}