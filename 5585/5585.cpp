#include <iostream>

using namespace std;

int don[6] = {500, 100, 50, 10, 5, 1}; 

int main(){
    int N;
    cin >> N;
    int i = 0;
    int cnt = 0;
    int res = 1000 - N;
    while(res != 0){
        if(res >= don[i]){
            res -= don[i];
            cnt++;
        }
        else
            i++;
    }
    cout << cnt;

}