#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        int num = i;
        int cnt = i;
        while(num != 0){
            cnt += num %10;
            num /= 10;
        }
        if(N == cnt){
            cout << i;
            return 0;
        }
    }
    cout << "0";
    return 0;
}