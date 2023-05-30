#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[101];
bool visited[101];
int cnt = 0;

void dfs(int r){
    visited[r] = true;
    for(int i=0; i<graph[r].size(); i++){
        if(!visited[graph[r][i]]){
            dfs(graph[r][i]);
            cnt++;
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    cout << cnt;
    return 0;
}