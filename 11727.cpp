#include <bits/stdc++.h>
using namespace std;

int d[1001];

int sol(int n)
{
	if (n == 1) return 1;
	if (n == 2) return 3;
	if (d[n] > 0) return d[n];
	d[n] = sol(n - 1) % 10007 + sol(n - 2) % 10007 + sol(n - 2) % 10007;
	return d[n];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cout << sol(n) % 10007;

	return 0;
}