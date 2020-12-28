#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[50][50];
bool vis[50][50];
int dx[] = { 1,0,-1,0,1,1,-1,-1 };
int dy[] = { 0,1,0,-1,1,-1,-1,1 };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		int w, h;
		cin >> w >> h;

		if (w == 0 && h == 0) break;

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> board[i][j];
			}
		}

		queue<pair<int, int>> q;
		int cnt = 0;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (!vis[i][j] && board[i][j])
				{
					cnt++;
					vis[i][j] = 1;
					q.push({ i,j });

					while (!q.empty())
					{
						auto cur = q.front();
						q.pop();

						for (int dir = 0; dir < 8; dir++)
						{
							int nx = cur.X + dx[dir];
							int ny = cur.Y + dy[dir];
							if (nx >= h || nx < 0 || ny >= w || ny < 0) continue;
							if (vis[nx][ny] || board[nx][ny] != 1) continue;
							vis[nx][ny] = true;		
							q.push({ nx,ny });
						}
					}
				}
			}
		}
		cout << cnt << "\n";
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				board[i][j] = 0;
				vis[i][j] = false;
			}
		}
	}

	return 0;
}