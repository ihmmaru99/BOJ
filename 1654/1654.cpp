#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
unsigned int arr[10001];

int main(){
    std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
    unsigned K, N;
    cin >> K >> N;
    unsigned int maximum = 0;
    unsigned ans = 0;
    for(int i=0; i<K; i++){
        cin >> arr[i];
        maximum = max(maximum, arr[i]);
    }
    unsigned int left = 1, right = maximum, mid;
    while(left <= right){
        mid = (left + right) / 2;
        unsigned int n = 0;
        for(int i=0; i<K; i++){
            n += arr[i] / mid;
        }
        if(n >= N){
            left = mid+1;
            ans = max(ans, mid);
        }
        else{
            right = mid-1;
        }
    }
    cout << ans << '\n';
    return 0;
}