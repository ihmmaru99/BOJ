#include <iostream>

using namespace std;

int main(){
    int N;
    int cnt = 0;
    cin >> N;
    while(true){
        if(N == 0){
            break;
        }
        else if(N < 0){
            cout << "-1";
            return 0;
        }
        else{
            if(N%5 == 0){
                cnt++;
                N -= 5;
            }
            else{
                cnt++;
                N -= 3;
            }
        }
    }
    cout << cnt;
    return 0;
}