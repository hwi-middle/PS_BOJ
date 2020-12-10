#include <bits/stdc++.h>
using namespace std;

const int INF = 1000 * 10000;
int d[1001];
int p[1001];

int sol(int n)
{
	if (n == 0) return 0;
	if (d[n] != INF) return d[n];

	for (int i = 1; i <= n; i++)
	{
		d[n] = min(sol(n - i) + p[i], d[n]);
	}

	return d[n];
}

int main()
{
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		d[i] = INF;
	}

	for (int i = 1; i <= t; i++)
	{
		cin >> p[i];
	}

	cout << sol(t);

	return 0;
}