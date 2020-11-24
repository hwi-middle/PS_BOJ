#include <bits/stdc++.h>
using namespace std;

long long d[100001][4];
const long long MOD = 1000000009LL;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= 100000; i++)
	{
		if (i - 1 >= 0)
		{
			d[i][1] = d[i - 1][2] + d[i - 1][3];
			if (i == 1)
			{
				d[i][1] = 1;
			}
		}
		if (i - 2 >= 0)
		{
			d[i][2] = d[i - 2][1] + d[i - 2][3];
			if (i == 2)
			{
				d[i][2] = 1;
			}
		}
		if (i - 3 >= 0)
		{
			d[i][3] = d[i - 3][1] + d[i - 3][2];
			if (i == 3)
			{
				d[i][3] = 1;
			}
		}
		d[i][1] %= MOD;
		d[i][2] %= MOD;
		d[i][3] %= MOD;
	}

	for (int i = 0; i < t; i++)
	{
		int num;
		cin >> num;
		cout << (d[num][1] + d[num][2] + d[num][3]) % MOD << "\n";
	}

	return 0;
}