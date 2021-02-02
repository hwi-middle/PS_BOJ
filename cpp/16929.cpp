#include <bits/stdc++.h>
using namespace std;

char board[50][50];
bool check[50][50];
int dis[50][50];
int n, m;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

bool sol(int x, int y, int cnt, char color)
{
	if (check[x][y])
	{
		if (cnt - dis[x][y] >= 4)
		{
			return true;
		}
	    else
		{
			return false;
		}
	}

	check[x][y] = true;	//해당 좌표에 방문 표시
	dis[x][y] = cnt;	//거리 표시
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m)
		{
			if (board[nx][ny] == color)
			{
				if (sol(nx, ny, cnt + 1, color))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (check[i][j]) continue;
			memset(dis, 0, sizeof(dis));
			if (sol(i, j, 1, board[i][j]))
			{
				cout << "Yes";
				return 0;
			}
		}
	}
	cout << "No";
	return 0;
}