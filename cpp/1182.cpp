#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,s;
	cin >> n >> s;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int ans = 0;
	//공집합을 제외하므로 1부터
	for (int i = 1; i < (1 << n); i++)
	{
		int sum = 0;

		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))
				sum += v[j];
		}
		if (sum == s)
			ans++;
	}

	cout << ans;

	return 0;
}