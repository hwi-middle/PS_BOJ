#include <bits/stdc++.h>
using namespace std;

vector<int> lst[1001]; //인접리스트
bool check[1001];

void dfs(int v)
{
	check[v] = true;
	for (int i = 0; i < lst[v].size(); i++)
	{
		int next = lst[v][i];
		if (!check[next])
			dfs(next);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		lst[u].push_back(v);
		lst[v].push_back(u);
	}

	int ans = 0;

	for (int i = 1; i <= n; i++)
	{
		if (check[i] == false)
		{
			dfs(i);
			ans++;
		}
	}

	cout << ans;

	return 0;
}