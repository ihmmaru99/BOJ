#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[100001];
bool visited[100001] = {false, };
int result[100001];
int cnt = 0;

void dfs(int r){
    if(visited[r])
        return;
    visited[r] = true;
    cnt++;
    result[r] = cnt;
    for(int i=0; i<graph[r].size(); i++){
        dfs(graph[r][i]);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, r;
    cin >> n >> m >> r;
    for(int i=1; i<=m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1; i<=n; i++)
        sort(graph[i].begin(), graph[i].end());
    dfs(r);
    for(int i=1; i<=n; i++){
        cout << result[i] << '\n';
    }
    return 0;
}