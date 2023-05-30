#include <iostream>
#include <vector>

using namespace std;
long long arr[1000001];

int main(){
    int N;
    cin >> N;
    arr[0] = 0, arr[1] = 1, arr[2] = 2;
    for(int i=3; i<=N; i++){
        arr[i] = arr[i-2] + arr[i-1];
    }
    cout << arr[N]%15746;
}