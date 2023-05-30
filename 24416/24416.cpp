#include <iostream>
#include <vector>

using namespace std;
int arr[41] = {0};
int N, cnt1=0, cnt2=0;

int fib(int N){
    if(N == 1 || N == 2){
        cnt1++;
        return 1;
    }
    else return (fib(N-1) + fib(N-2));
}

int main(){
    cin >> N;
    fib(N);
    arr[1] = arr[2] == 1;
    for(int i=3; i<=N; i++){
        arr[i] = arr[i-2] + arr[i-1];
        cnt2++;
    }
    cout << cnt1 << ' ' << cnt2;
    return 0;
}