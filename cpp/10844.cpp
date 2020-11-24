#include <bits/stdc++.h>
using namespace std;

long long d[101][11];
const long long MOD = 1000000000;
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= 9; i++)
	{
		d[1][i] = 1;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			d[i][j] = 0;
			if (j - 1 >= 0)
			{
				d[i][j] += d[i - 1][j - 1];
			}
			if (j + 1 <= 9)
			{
				d[i][j] += d[i - 1][j + 1];
			}
			d[i][j] %= MOD;
		}
	}

	long long res = 0;
	for (int i = 0; i <= 9; i++)
	{
		res += d[n][i];
	}

	cout << res % MOD;
	return 0;
}