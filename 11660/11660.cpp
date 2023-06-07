#include <iostream>

# define MAX 1025

using namespace std;

int map[MAX][MAX] = {0, };

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int temp;
            cin >> temp;
            map[i][j] = map[i-1][j] + map[i][j-1] + temp - map[i-1][j-1];
        }
    }
    int x,y,x_end, y_end, cnt = 0;
    for(int i=0; i<m; i++){
        cin >> x >> y >> x_end >> y_end;
        cnt = map[x_end][y_end] - map[x-1][y_end] - map[x_end][y-1]+map[x-1][y-1];
        cout << cnt << '\n';
    }
    return 0;
}