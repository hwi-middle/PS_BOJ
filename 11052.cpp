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
		d[n] = max(sol(n - i) + p[i], d[n]);
	}
	return d[n];
}

int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> p[i];
	}

	cout << sol(t);

	return 0;
}