#include <bits/stdc++.h>
using namespace std;

int d[1001];
int p[1001];

int sol(int n)
{
	if (n == 0) return 0;
	if (d[n] > 0) return d[n];

	for (int i = 1; i <= n; i++)
	{
		if (d[n] == -1 || sol(n - i) + p[i] < d[n])
		{
			d[n] = sol(n - i) + p[i];
		}
	}
	return d[n];
}

int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		d[i] = -1;
	}

	for (int i = 1; i <= t; i++)
	{
		cin >> p[i];
	}

	cout << sol(t);

	return 0;
}