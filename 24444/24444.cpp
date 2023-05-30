#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> graph[100001];
bool visited[100001] = {false, };
int result[100001];
int cnt = 0;

void bfs(int r){
    queue<int> q;
    q.push(r);
    visited[r] = true;
    cnt++;
    result[r] = cnt;
    while(!q.empty()){
        int res = q.front();
        q.pop();
        for(int i=0; i<graph[res].size(); i++){
            int temp = graph[res][i];
            if(!visited[temp]){
                cnt++;
                result[temp] = cnt;
                q.push(temp);
                visited[temp] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, r;
    cin >> n >> m >> r;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    bfs(r);
    for(int i=1; i<=n; i++){
        cout << result[i] << '\n';
    }

}