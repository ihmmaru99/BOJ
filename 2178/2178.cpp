#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int n, m;
int maze[101][101];
bool visited[101][101] = {false, };
int result[101][101] = {0, };
queue<pair<int, int>> q;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void bfs(int a, int b);

void bfs(int a, int b){
    visited[a][b] = true;
    q.push(make_pair(a,b));
    result[a][b]++;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] == 1 && !visited[nx][ny]){
                visited[nx][ny] = true;
                q.push(make_pair(nx,ny));
                result[nx][ny] = result[x][y] + 1;
            }
        }
    }
}

int main(){
    cin >> n >> m;                      // 미로 크기 입력
    for (int i=0; i<n; ++i){            // 미로 입력
        string row;                     // 행 입력
        cin >> row;
        for (int j=0; j<m; ++j){        // 행 별 좌표값 저장
            maze[i][j] = row[j] - '0';    // 행 별 좌표값들은 문자 형태이기 때문에, 숫자로 변환
        }
    }
    bfs(0, 0);
    cout << result[n-1][m-1];
}