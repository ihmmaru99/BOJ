#include <iostream>

using namespace std;

char result[5] = {'E','A','B','C','D'};

int main(){
    for(int i=0; i<3; i++){
        int cnt = 0;
        for(int j=0; j<4; j++){
            int a;
            cin >> a;
            if(a == 0){
                cnt++;
            }
        }
        cout << result[cnt] << '\n';
    }
    return 0;
}