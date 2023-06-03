#include <iostream>
#include <queue>
#include <cstring>

# define MAX 300

using namespace std;

int l;
int x_end, y_end;
int field[MAX][MAX] = {0, };
bool visited[MAX][MAX] = {false, };
int dx[8] = { -1,1,2,2,1,-1,-2,-2 };
int dy[8] = { 2,2,1,-1,-2,-2,-1,1 };

void bfs(int x, int y) {
	queue<pair<int,int>>q;
	q.push(make_pair(x,y));
	visited[x][y] = 1;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0;i < 8;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
			if (visited[nx][ny] == 1 || field[nx][ny] != 0) continue;
			field[nx][ny] = field[x][y] + 1;
			q.push({ nx,ny });
			visited[nx][ny] = 1;
			if (nx == x_end && ny == y_end) return;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc;
	cin >> tc;
	while (tc--) {
		cin >> l;
		int x0, y0;
		cin >> x0 >> y0 >> x_end >> y_end;
		field[x0][y0] = 0;
		bfs(x0,y0);
		cout << field[x_end][y_end] << '\n';
		memset(visited, false, sizeof(visited));
		memset(field, 0, sizeof(field));
	}
}