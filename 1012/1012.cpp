#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int t, n, m, k;
int map[51][51] = {0, };
bool visited[51][51] = {false, };
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] == 1 && !visited[nx][ny])
            dfs(nx, ny);
    }
}

int main(){
    cin >> t;
    for(int i=0; i<t; i++){
        int cnt = 0;
        cin >> m >> n >> k;
        for(int i=0; i<k; i++){
            int a, b;
            cin >> a >> b;
            map[b][a] = 1;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(map[i][j] == 1 && !visited[i][j]){
                    cnt++;
                    dfs(i,j);
                }
                else
                    continue;
            }
        }
        cout << cnt << '\n';
        memset(visited, false, sizeof(visited));
        memset(map, 0, sizeof(map));
    }
}