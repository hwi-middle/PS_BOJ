#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dis[300][300];
int dx[] = { 2,2,-2,-2,1,1,-1,-1 };
int dy[] = { 1,-1,1,-1,2,-2,2,-2 };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		queue<pair<int, int>> q;

		int cur_x, cur_y;
		int goal_x, goal_y;
		cin >> cur_x >> cur_y;
		cin >> goal_x >> goal_y;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				dis[i][j] = -1;
			}
		}

		q.push({ cur_x,cur_y });
		dis[cur_x][cur_y] = 0;
		while (!q.empty())
		{
			auto cur = q.front();
			q.pop();

			for (int dir = 0; dir < 8; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];
				if (nx >= n || nx < 0 || ny >= n || ny < 0) continue;
				if (dis[nx][ny] >= 0) continue;
				dis[nx][ny] = dis[cur.X][cur.Y] + 1;
				q.push({ nx,ny });
			}
		}

		cout << dis[goal_x][goal_y] << "\n";
	}


	return 0;
}