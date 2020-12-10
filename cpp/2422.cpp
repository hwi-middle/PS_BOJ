#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> comb(n + 1);
	for (int i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;

		comb[a].push_back(b);
	}
	int res = 0;
	for (int i = 1; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			for (int k = j + 1; k <= n; k++)
			{
				bool valid = true;

				for (int l = 0; l < comb[i].size(); l++)
				{
					if (comb[i][l] == j || comb[i][l] == k)
					{
						valid = false;
					}
				}
				for (int l = 0; l < comb[j].size(); l++)
				{
					if (comb[j][l] == i || comb[j][l] == k)
					{
						valid = false;
					}
				}
				for (int l = 0; l < comb[k].size(); l++)
				{
					if (comb[k][l] == i || comb[k][l] == j)
					{
						valid = false;
					}
				}

				if (valid)
				{
					res++;
				}
			}
		}
	}

	cout << res;

	return 0;
}