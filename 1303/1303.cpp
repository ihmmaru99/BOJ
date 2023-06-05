#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

# define MAX 100

using namespace std;

int n, m;

char map[MAX][MAX];
bool visited[MAX][MAX] = {false, };
int w=0, b=0;
queue<pair<int,int>> q;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void bfs(int x, int y, char c){
    visited[x][y] = true;
    q.push(make_pair(x, y));
    int cnt = 0;
    cnt = 1;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(nx >=0 && nx < m && ny >= 0 && ny <n && !visited[nx][ny] && map[nx][ny] == c){
                cnt++;
                visited[nx][ny] = true;
                q.push(make_pair(nx,ny));               
            }
        }
    }
    if(c == 'W'){
        w += pow(cnt, 2);
    }
    else{
        b += pow(cnt, 2);
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(!visited[i][j])
            bfs(i,j, map[i][j]);
        }
    }
    cout << w << ' ' << b << '\n';
}