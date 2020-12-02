#include <bits/stdc++.h>

using namespace std;

long long d[117];

long long sol(int n)
{
	if (n <= 3) return 1;
	if (d[n] > 0) return d[n];
	d[n] = sol(n - 1) + sol(n - 3);
	return d[n];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	cout << sol(n);

	return 0;
}