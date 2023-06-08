#include <iostream>
#include <algorithm>
#include <cstring>

# define MAX 20

using namespace std;

bool alphabet[26] = {false, };

int r, c, cnt = 0;
char map[MAX][MAX];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int x, int y, int check){
    int index = map[x][y] - 'A';
    // cout << index;
    alphabet[index] = true;
    cnt = max(cnt, check);
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < r && ny >= 0 && ny < c){
            int nindex = map[nx][ny] - 'A';
            if(!alphabet[nindex]){
                alphabet[nindex] = true;
                dfs(nx, ny, check+1);
                alphabet[nindex] = false;
            }
        }
    }
}

int main(){
    cin >> r >> c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> map[i][j];
        }
    }
    /*
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            cout << map[i][j] << ' ';
        cout << '\n';
    }
    */
   dfs(0,0,1);
   cout << cnt << '\n';
    return 0;
}
