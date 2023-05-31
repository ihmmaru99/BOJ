#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>

# define MAX 101

using namespace std;

int map[MAX][MAX];
bool visited[MAX][MAX] = {false, };
queue<pair<int,int>> q;

int n;
int max_num = -1;
int max_height = -1;
int min_height = 101;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void bfs(int y, int x, int h){
    visited[y][x] = true;
    q.push(make_pair(y,x));
    while(!q.empty()){
        y = q.front().first;
        x = q.front(). second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >=0 && nx < n && ny >=0 && ny < n){
                if(map[ny][nx] >= h && !visited[ny][nx]){
                    visited[ny][nx] = true;
                    q.push(make_pair(ny,nx));
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
            max_height = max(map[i][j], max_height);
            min_height = min(map[i][j], min_height);

        }
    }
    for(int h=min_height; h<=max_height; h++){
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && map[i][j] >= h){
                    cnt++;
                    bfs(i,j,h);
                }
            }
        }
        max_num = max(cnt, max_num);
        memset(visited, false, sizeof(visited));
    }
    cout << max_num;
    return 0;
}