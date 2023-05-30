#include <iostream>
#include <algorithm>

using namespace std;
long long arr[1000001];

int main(){
    unsigned int N, M;
    cin >> N >> M;
    long long maximum = 0;
    long long ans = 0;
    for(int i=0; i<N; i++){
        cin >> arr[i];
        maximum = max(maximum, arr[i]);
    }
    long long left = 1, right = maximum, mid;
    while(left <= right){
        mid = (left + right) / 2;
        long long cnt = 0;
        for(int i=0; i<N; i++){
            if(arr[i] >= mid){
                cnt += arr[i] - mid;
            }
        }
        if(cnt >= M){
            left = mid+1;
            ans = mid;
        }
        else
            right = mid - 1;
    }
    cout << ans;
}