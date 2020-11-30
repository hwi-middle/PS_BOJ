#include <bits/stdc++.h>

using namespace std;

int a[500][500];
int d[500][500];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}

	d[0][0] = a[0][0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j >= 1)
			{
				d[i][j] = max(d[i - 1][j], d[i - 1][j - 1]) + a[i][j];
			}
			else
			{
				d[i][j] = d[i - 1][j] + a[i][j];
			}
		}
	}

	int ans = d[n - 1][0];
	for (int i = 1; i < n; i++)
	{
		if (ans < d[n - 1][i])
		{
			ans = d[n - 1][i];
		}
	}

	cout << ans;

	return 0;
}