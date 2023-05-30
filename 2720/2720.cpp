#include <iostream>

using namespace std;

int main(){
    int num[4];
    int T, result;
    cin >> T;
    while(T--){
        int c;
        cin >> c;
        result = c / 25;
        num[0] = result;
        c %= 25;
        result = c / 10;
        num[1] = result;
        c %= 10;
        result = c / 5;
        num[2] = result;
        c %= 5;
        num[3] = c;
        for(int i=0; i<4; i++){
            cout << num[i] << ' ';
        }
    }
    return 0;
}