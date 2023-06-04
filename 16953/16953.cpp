#include <iostream>
#include <algorithm>

using namespace std;

int a, b;
int check = 10000;

void dfs(long long num, int cnt){
    if (num > b) return;
    if (num == b){
        check = min(check, cnt);
    }
    dfs(num * 2, cnt+1);
    dfs(num * 10 + 1, cnt + 1);
}

int main(){
    cin >> a >> b;
    dfs(a, 1);
    if(check == 10000)
        cout << -1;
    else
        cout << check;
}