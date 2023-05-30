#include <iostream>
#include <queue>

#define MAX 100001

using namespace std;

int n, k;
bool visited[MAX] = {false, };
queue<pair<int,int>> q;

int bfs(int n){
    q.push(make_pair(n,0));
    visited[n] = true;
    while(!q.empty()){
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(x == k)
            return cnt;
        if(x+1 < MAX && visited[x+1] == false){
            q.push(make_pair(x+1, cnt+1));
            visited[x+1] = true;
        }
        if(x-1 >= 0 && visited[x-1] == false){
            q.push(make_pair(x-1, cnt+1));
            visited[x-1] = true;
        }
        if(x*2 < MAX && visited[2*x] == false){
            q.push(make_pair(2*x, cnt+1));
            visited[2*x] = true;
        }
    }
    return 0;
}

int main(){
    cin >> n >> k;
    cout << bfs(n);
}