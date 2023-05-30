#include <iostream>
#include <vector>
#include <cstring>

#define MAX 101

using namespace std;

vector<int> v[MAX];
int visited[MAX];

void dfs(int x){
    for(int i=0; i<v[x].size(); i++){
        if(!visited[v[x][i]]){
            visited[v[x][i]] = 1;
            dfs(v[x][i]);
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int a;
            cin >> a;
            if(a){
                v[i].push_back(j);
            }
        }
    }
    for(int i=0; i<n; i++){
        memset(visited, 0, sizeof(visited));
        dfs(i);
        for(int j=0; j<n; j++){
            cout << visited[j] << ' ';
        }
        cout << '\n';
    }
}