#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num[21];
    for(int i=1; i<=20; i++){
        num[i] = i;
    }
    for(int i=0; i<10; i++){
        int start, end;
        cin >> start >> end;
        reverse(num+start, num+end+1);
        // for(int j=1; j<20; j++){
        //     cout << num[j] << ' ';
        // }
        // cout << '\n';
    }
    for(int i=1; i<=20; i++){
        cout << num[i] << ' ';
    }
    return 0;
}