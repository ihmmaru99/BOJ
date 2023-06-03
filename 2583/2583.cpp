#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

# define MAX 100

using namespace std;

bool visited[MAX][MAX] = {false, };
queue<pair<int,int>> q;
vector<int> result;
int m, n, k;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void bfs(int y, int x){
    visited[y][x] = true;
    q.push(make_pair(y,x));
    int cnt = 1;
    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny >= 0 && ny < m && nx >= 0 && nx < n && !visited[ny][nx]){
                visited[ny][nx] = true;
                q.push(make_pair(ny,nx));
                cnt++;
            }
        }
    }
    result.push_back(cnt);
}

int main(){
    cin >> m >> n >> k;
    for(int i=0; i<k; i++){
        int x_start, y_start, x_end, y_end;
        cin >> x_start >> y_start >> x_end >> y_end;
        for(int i=y_start; i <y_end; i++){
            for(int j=x_start; j<x_end; j++){
                visited[i][j] = true;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(!visited[i][j]){
                bfs(i,j);
            }
        }
    }
    cout << result.size() << '\n';
    sort(result.begin(), result.end());
    for(int i=0; i<result.size(); i++){
        cout << result[i] << ' ';
    }
}