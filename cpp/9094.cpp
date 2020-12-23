#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;

		int ans = 0;

		for (int a = 1; a <= n - 2; a++)
		{
			for (int b = a + 1; b <= n - 1; b++)
			{
				if ((a * a + b * b + m) % (a * b) == 0)
					ans++;
			}
		}
		cout << ans << "\n";
	}

	return 0;
}