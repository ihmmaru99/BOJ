#include <iostream>

using namespace std;

int main(){
    int result = 0;
    int x;
    int y;
    int num[10][10];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> num[i][j];
        }
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(result <= num[i][j]){
                result = num[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << result << '\n' << x+1 << ' ' << y+1;
}