#include <bits/stdc++.h>
using namespace std;

vector<int> lst[20001]; //인접리스트
int group[20001]; //각 정점에 대해 그룹 1,2로 나누어지면 이분 그래프임

//v번 정점 방문, 그 정점은 t번 그룹
void dfs(int v, int t)
{
	group[v] = t;
	for (int i = 0; i < lst[v].size(); i++)
	{
		int next = lst[v][i];
		if (group[next] == 0)
			dfs(next, 3 - t); //1번 그룹이면 다음 정점은 2번, 2번그룹이면 다음 정점은 1번
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < m; i++)
		{
			int u, v;
			cin >> u >> v;
			lst[u].push_back(v);
			lst[v].push_back(u);
		}

		for (int i = 1; i <= n; i++)
		{
			if (group[i] == 0)
			{
				dfs(i, 1);
			}
		}

		bool valid = true;
		for (int i = 1; i <= n; i++)
		{
			for (int k = 0; k < lst[i].size(); k++)
			{
				int j = lst[i][k];
				if (group[i] == group[j]) //연결된 정점과 같은 그룹에 속한다면 이분 그래프 아님
				{
					valid = false;
				}
			}
		}

		cout << (valid ? "YES\n" : "NO\n");

		for (int i = 1; i <= n; i++) 
		{
			lst[i].clear();
			group[i] = 0;
		}
	}

	return 0;
}