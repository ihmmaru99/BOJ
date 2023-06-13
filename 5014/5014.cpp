#include <iostream>
#include <vector>
#include <queue>

# define MAX 1000001

using namespace std;

int F, S, G, U, D;
vector<int> v;
queue<int> q;
int stage[MAX] = {0, };
bool visited[MAX] = {false, };

void bfs(int x){
    visited[x] = true;
    q.push(x);
    while(!q.empty()){
        x = q.front();
        q.pop();
        for(int i=0; i<2; i++){
            int nx = x + v[i];
            if(nx > 0 && nx <=F && !visited[nx]){
                visited[nx] = true;
                q.push(nx);
                stage[nx] = stage[x] + 1;
            }
        }
    }
}

int main(){
    cin >> F >> S >> G >> U >> D;
    v.push_back(U);
    v.push_back(-1 * D);

    bfs(S);
    if(visited[G])
        cout << stage[G] << '\n';
    else
        cout << "use the stairs";

    return 0;
}