#include <bits/stdc++.h>
using namespace std;

vector<int> e[101];
bool check[101];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	cin >> k;

	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;

		e[a].push_back(b);
		e[b].push_back(a);
	}

	queue<int> q;
	check[1] = true;
	q.push(1);
	int cnt = 0;
	while (!q.empty())
	{
		int n = q.front();
		q.pop();
		for (int i = 0; i < e[n].size(); i++)
		{
			int next = e[n][i];
			if (check[next] == false)
			{
				cnt++;
				check[next] = true;
				q.push(next);
			}
		}
	}

	cout << cnt;


	return 0;
}