#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l, p, v;
	cin >> l >> p >> v;

	int i = 1;
	while (l + p + v != 0)
	{
		int res = 0;

		res = v / p * l;
		res += v % p > l ? l : v % p;

		cout << "Case " << i++ << ": " << res << "\n";
		cin >> l >> p >> v;
	}

	return 0;
}