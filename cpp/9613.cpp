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

	long long res = 0;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		vector<int> v(n);
		for (int j = 0; j < n; j++)
		{
			cin >> v[j];
		}
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				res += gcd(v[j], v[k]);
			}
		}

		cout << res << "\n";
		res = 0;
		v.clear();
	}

	return 0;
}