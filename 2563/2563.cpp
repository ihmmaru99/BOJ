#include <iostream>
#include <vector>

using namespace std;

int map[1001][1001] = {0, };

int main(){
    int n;
    int cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        for(int i=a; i<a+10; i++){
            for(int j=b; j<b+10; j++)
                if(!map[i][j]){
                    cnt++;
                    map[i][j] = 1;
                }
        }
    }
    cout << cnt;
}