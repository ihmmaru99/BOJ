#include <iostream>
#include <cstring>

#define MAX 51

using namespace std;

bool visited[MAX][MAX];
int map[MAX][MAX];
int w, h;

int dx[8] = {-1,1,0,0,-1,-1,1,1}; // 상 하 좌 우 왼위 오위 왼아래 오아래
int dy[8] = {0,0,-1,1,-1,1,-1,1};

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=0; i<8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w)
            continue;
        if(visited[nx][ny] == false && map[nx][ny]){
            visited[nx][ny] = true;
            dfs(nx,ny);
        }
    }
}

int main(){
    while(true){
        int cnt = 0;
        cin >> w >> h;
        if(w == 0 && h == 0)
            break;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cin >> map[i][j];
            }
        }
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(map[i][j] == 1 && visited[i][j] == false){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
        memset(visited, false, sizeof(visited));
    }
    return 0;
}