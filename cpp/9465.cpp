#include <bits/stdc++.h>

using namespace std;

long long a[100001][2];
long long d[100001][3];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		for (int j = 1; j <= n; j++)
		{
			cin >> a[j][0];
		}
		for (int j = 1; j <= n; j++)
		{
			cin >> a[j][1];
		}

		for (int j = 1; j <= n; j++)
		{
			d[j][0] = max({ d[j - 1][0],  d[j - 1][1] , d[j - 1][2] });
			d[j][1] = max(d[j - 1][0], d[j - 1][2]) + a[j][0];
			d[j][2] = max(d[j - 1][0], d[j - 1][1]) + a[j][1];
		}
		long long ans = max({ d[n][0], d[n][1], d[n][2] });
		cout << ans << "\n";
	}

	return 0;
}