#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int cnt = 0;
    int min_num = 100;
    for(int i=0; i<7; i++){
        int a;
        cin >> a;
        if(a % 2 == 1){
            cnt += a;
            min_num = min(a, min_num);
        }
    }
    if(cnt == 0){
        cout << "-1" << '\n';
        return 0;
    }
    cout << cnt << '\n' << min_num << '\n';
    return 0;
}