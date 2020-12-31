#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[100][100];
int dis[100][100];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> m >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < m; j++)
		{
			board[i][j] = str[j] - '0';
			dis[i][j] = -1;
		}
	}

	deque<pair<int, int> > q;
	q.push_back({ 0,0 });
	dis[0][0] = 0;

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop_front();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (dis[nx][ny] >= 0) continue;

			if (board[nx][ny] == 0)
			{
				dis[nx][ny] = dis[cur.X][cur.Y];
				q.push_front({ nx,ny });
			}
			else
			{
				dis[nx][ny] = dis[cur.X][cur.Y] + 1;
				q.push_back({ nx,ny });
			}
		}
	}

	cout << dis[n - 1][m - 1];

	return 0;
}