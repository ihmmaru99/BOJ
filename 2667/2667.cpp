#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

string arr[26];
vector<int> result;
bool visited[26][26] = {false, };
queue<pair<int,int>> q;
int cnt = 0;
int n;

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void bfs(int a, int b){
    q.push(make_pair(a, b));
    visited[a][b] = true;
    cnt++;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx <n && ny >= 0 && ny < n && visited[nx][ny] == false && arr[nx][ny] == '1'){
                q.push(make_pair(nx, ny));
                visited[nx][ny] = true;
                cnt++;
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == '1' && visited[i][j] == false){
                cnt = 0;
                bfs(i,j);
                result.push_back(cnt);
            }
        }
    }
    sort(result.begin(), result.end());
    cout << result.size() <<'\n';
    for(int i=0; i<result.size(); i++){
        cout << result[i] << '\n';
    }
    return 0;
}