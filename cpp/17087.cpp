#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int s;
	cin >> n >> s;

	int a;
	int b;

	cin >> a;
	a = abs(s - a);
	int res = a;
	for (int i = 1; i < n; i++)
	{
		cin >> b;
		b = abs(s - b);
		res = gcd(a, b);
		a = res;
	}

	cout << res;

	return 0;
}