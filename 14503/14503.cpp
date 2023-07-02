#include <iostream>
# define MAX 50

using namespace std;

int n, m;
int r, c, d;
int map[MAX][MAX];
bool visited[MAX][MAX];

int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};

void dfs(int r, int c, int d, int sum){
    for(int i=0; i<4; i++){
        int nd = (d+3-i) % 4;
        int nr = r + dr[nd];
        int nc = c + dc[nd];
        if(nr < 0 || nr >= n || nc < 0 || nc >= m || map[nr][nc] == 1)
            continue;
        if(visited[nr][nc] == false && map[nr][nc] == 0){
            visited[nr][nc] = true;
            dfs(nr, nc, nd, sum+1);
        }
    }
    int back = d + 2 < 4 ? d+2 : d-2;
    int br = r + dr[back];
    int bc = c + dc[back];
    if(br >= 0 && br < n && bc >= 0 && bc < m){
        if(map[br][bc] == 0){
            dfs(br, bc, d, sum);
        }
        else{
            cout << sum << '\n';
            exit(0);
        }
    }
}
    
int main(){
    cin >> n >> m;
    cin >> r >> c >> d;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> map[i][j];
            visited[i][j] = false;
        }
    }
    visited[r][c] = true;
    dfs(r,c,d,1);
    
    return 0;
}