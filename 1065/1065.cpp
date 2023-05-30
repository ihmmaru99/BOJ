#include <string>
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int cnt = 0;
    if(N < 100){
        cout << N;
        return 0;
    }
    else{
        cnt = 99;
        for(int i=100; i<=N; i++){
            int a, b, c;
            a = i/100;
            b = (i/10) % 10;
            c = i % 10;
            if((c-b) == (b-a))
                cnt++;
        }
        cout << cnt;
    }
    return 0;
}