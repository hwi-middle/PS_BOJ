#include <bits/stdc++.h>
using namespace std;

vector<int> lst[1001]; //인접리스트
bool check[1001];

void dfs(int v)
{
	check[v] = true;
	cout << v << " ";
	for (int i = 0; i < lst[v].size(); i++)
	{
		int next = lst[v][i];
		if (!check[next])
			dfs(next);
	}
}

void bfs(int v)
{
	queue<int> q;
	check[v] = true;
	q.push(v);
	while (!q.empty())
	{
		int cur = q.front();
		cout << cur << " ";
		q.pop();

		for (int i = 0; i < lst[cur].size(); i++)
		{
			int next = lst[cur][i];
			if (!check[next])
			{
				check[next] = true;
				q.push(next);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, v;
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		lst[a].push_back(b);
		lst[b].push_back(a);
	}

	for (int i = 1; i <= n; i++)
	{
		sort(lst[i].begin(), lst[i].end());
	}
	dfs(v);
	cout << "\n";

	for (int i = 1; i <= n; i++)
	{
		check[i] = false;
	}
	bfs(v);

	return 0;
}