#include <bits/stdc++.h>
using namespace std;

int board[500][500];

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//I미노
			if (i + 3 < n)
			{
				int temp = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 3][j];
				res = max(res, temp);
			}
			if (j + 3 < m)
			{
				int temp = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i][j + 3];
				res = max(res, temp);
			}

			//O미노
			if (i + 1 < n && j + 1 < m)
			{
				int temp = board[i][j] + board[i][j + 1] + board[i + 1][j] + board[i + 1][j + 1];
				res = max(res, temp);
			}

			//Z미노, S미노
			if (i + 2 < n && j + 1 < m)
			{
				int temp = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j + 1];
				res = max(res, temp);
			}
			if (i - 1 >= 0 && j + 2 < m)
			{
				int temp = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i - 1][j + 2];
				res = max(res, temp);
			}
			if (i + 1 < n && j + 1 < m && i - 1 >= 0)
			{
				int temp = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i - 1][j + 1];
				res = max(res, temp);
			}
			if (i + 1 < n && j + 2 < m)
			{
				int temp = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 1][j + 2];
				res = max(res, temp);
			}

			//J미노, L미노
			if (i - 2 >= 0 && j + 1 < m)
			{
				int temp = board[i][j] + board[i - 1][j] + board[i - 2][j] + board[i][j + 1];
				res = max(res, temp);
			}
			if (i - 1 >= 0 && j - 2 >= 0)
			{
				int temp = board[i][j] + board[i - 1][j] + board[i][j - 1] + board[i][j - 2];
				res = max(res, temp);
			}
			if (i + 2 < n && j - 1 >= 0)
			{
				int temp = board[i][j] + board[i][j - 1] + board[i + 1][j] + board[i + 2][j];
				res = max(res, temp);
			}
			if (i + 1 < n && j + 2 < m)
			{
				int temp = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i][j + 2];
				res = max(res, temp);
			}
			if (i - 2 >= 0 && j - 1 >= 0)
			{
				int temp = board[i][j] + board[i][j - 1] + board[i - 1][j] + board[i - 2][j];
				res = max(res, temp);
			}
			if (i - 1 >= 0 && j + 2 < m)
			{
				int temp = board[i][j] + board[i - 1][j] + board[i][j + 1] + board[i][j + 2];
				res = max(res, temp);
			}
			if (i + 2 < n && j + 1 < m)
			{
				int temp = board[i][j] + board[i][j + 1] + board[i + 1][j] + board[i + 2][j];
				res = max(res, temp);
			}
			if (i + 1 < n && j - 2 >= 0)
			{
				int temp = board[i][j] + board[i + 1][j] + board[i][j - 1] + board[i][j - 2];
				res = max(res, temp);
			}

			//T미노
			if (i + 1 < n && j + 2 < m)
			{
				int temp = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i][j + 2];
				res = max(res, temp);
			}
			if (i - 1 >= 0 && j + 2 < m)
			{
				int temp = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i][j + 2];
				res = max(res, temp);
			}
			if (i + 2 < n && j - 1 >= 0)
			{
				int temp = board[i][j] + board[i + 1][j] + board[i + 1][j - 1] + board[i + 2][j];
				res = max(res, temp);
			}
			if (i + 2 < n && j + 1 < m)
			{
				int temp = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j];
				res = max(res, temp);
			}
		}
	}

	cout << res;

	return 0;
}