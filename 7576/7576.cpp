#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

queue<pair<int,int>> q;
bool visited[1001][1001] = {false, };
int map[1001][1001];
int m, n;
int result = 0;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >=0 && nx < n && ny >= 0 && ny < m){
                if(map[nx][ny] == 0 && visited[nx][ny] == false){
                    visited[nx][ny] = true;
                    q.push(make_pair(nx,ny));
                    map[nx][ny] = map[x][y] + 1;
                }
            }
        }
    }
}

int main(){
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> map[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(map[i][j] == 1)
                q.push(make_pair(i,j));
        }
    }
    bfs();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(map[i][j] == 0){
                cout << "-1";
                return 0;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            result = max(result, map[i][j]);
        }
    }
    cout << result - 1;
    return 0;
}