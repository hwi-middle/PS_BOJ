#include <bits/stdc++.h>
using namespace std;

vector<int> lst[20001]; //��������Ʈ
int group[20001]; //�� ������ ���� �׷� 1,2�� ���������� �̺� �׷�����

//v�� ���� �湮, �� ������ t�� �׷�
void dfs(int v, int t)
{
	group[v] = t;
	for (int i = 0; i < lst[v].size(); i++)
	{
		int next = lst[v][i];
		if (group[next] == 0)
			dfs(next, 3 - t); //1�� �׷��̸� ���� ������ 2��, 2���׷��̸� ���� ������ 1��
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
				if (group[i] == group[j]) //����� ������ ���� �׷쿡 ���Ѵٸ� �̺� �׷��� �ƴ�
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