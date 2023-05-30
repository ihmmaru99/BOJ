#include <iostream>
#include <vector>
#include <cstring>

#define MAX 101

using namespace std;

int n;
string map[MAX];
bool visited[MAX][MAX] = {false, };

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx <0 || nx >= n || ny < 0 || ny >= n)
            continue;
        if(map[x][y] == map[nx][ny] && visited[nx][ny] == false){
            dfs(nx, ny);
        }
    }
}

int main(){
    int cnt_normal = 0;
    int cnt_redgreen = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> map[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(visited[i][j] == false){
                cnt_normal++;
                dfs(i,j);
            }
        }
    }
    cout << cnt_normal << ' ';
    memset(visited, false, sizeof(visited));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(map[i][j] == 'G')
                map[i][j] = 'R';
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(visited[i][j] == false){
                cnt_redgreen++;
                dfs(i,j);
            }
        }
    }
    cout << cnt_redgreen << '\n';
}