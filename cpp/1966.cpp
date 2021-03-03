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

		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for (int j = 0; j < n; j++)
		{
			int imp;
			cin >> imp;
			q.push({j, imp});
			pq.push(imp);
		}

		int cnt = 0;
		while (!q.empty())
		{
			int idx = q.front().first;
			int val = q.front().second;
			q.pop();

			//우선순위 큐와 비교해가며 카운팅
			if (pq.top() == val)
			{
				pq.pop();
				cnt++;
				if (idx == m)
				{
					cout << cnt <<"\n";
					break;
				}
			}
			else
			{
				q.push({ idx,val });
			}
		}
	}

	return 0;
}
