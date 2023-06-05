#include <iostream>

using namespace std;

int t, n;
int cnt = 0;

void dfs(int x){
    if(x == n){
        cnt++;
        return;
    }
    if(x > n)
        return;
    for(int i=1; i<=3; i++){
        dfs(x+i);
    }
}

int main(){
    cin >> t;
    for(int i=0; i<t; i++){
        cnt = 0;
        cin >> n;
        dfs(0); 
        cout << cnt << '\n';
    }
    return 0;
}

