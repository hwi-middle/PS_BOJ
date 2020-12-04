#include <bits/stdc++.h>
using namespace std;

int d[1001][1001];
const int mod = 1e9 + 7;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	d[1][1] = 1;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i > 1)
			{
				d[i][j] += d[i - 1][j];
				d[i][j] %= mod;
			}
			if (j > 1)
			{
				d[i][j] += d[i][j - 1];
				d[i][j] %= mod;

			}
			if (i > 1 && j > 1)
			{
				d[i][j] += d[i - 1][j - 1];
				d[i][j] %= mod;
			}
		}
	}
	cout << d[n][m] % mod;

	return 0;
}