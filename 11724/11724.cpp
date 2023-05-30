#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int cnt = 0;
bool visited[1001] = {false, };
vector<int> v[1001];
queue<int> q;
int n, m;

void bfs(int start);

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        if(visited[i] == false){
            bfs(i);
            cnt++;
        }
    }
    cout << cnt;
}

void bfs(int start){
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int current = q.front();
        q.pop();
        for(int i=0; i<v[current].size(); i++){
            if(visited[v[current][i]] == false){
                visited[v[current][i]] = true;
                q.push(v[current][i]);
            }
        }
    }
}