#include <iostream>
#include <queue>
#include <algorithm>
#include <iterator>

# define MAX 8

using namespace std;

int map[MAX][MAX];
int temp[MAX][MAX];
int n, m, result=0;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void Copy(int map[MAX][MAX], int temp[MAX][MAX]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            temp[i][j] = map[i][j];
        }
    }
}

void bfs(){
    int check[MAX][MAX];
    Copy(temp, check);
    queue<pair<int,int>> q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(check[i][j] == 2){
                q.push(make_pair(i,j));
            }
        }
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                if(check[nx][ny] == 0){
                    check[nx][ny] = 2;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(check[i][j] == 0)
                cnt++;
        }
    }
    result = max(cnt, result);
}

void wall(int cnt){
    if(cnt == 3){
        bfs();
        return;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(temp[i][j] == 0){
                temp[i][j] = 1;
                wall(cnt+1);
                temp[i][j] = 0;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> map[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(map[i][j] == 0){
                Copy(map, temp);
                temp[i][j] = 1;
                wall(1);
                temp[i][j] = 0;
            }
        }
    }
    cout << result << '\n';
}