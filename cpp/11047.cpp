#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (int i = n - 1; i >= 0; i--)
	{
		cin >> v[i];
	}

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += k / v[i];
		k %= v[i];
	}

	cout << ans;

	return 0;
}