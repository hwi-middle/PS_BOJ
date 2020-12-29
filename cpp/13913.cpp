#include <bits/stdc++.h>
using namespace std;

#define LEN 200005
int dis[LEN];
int from[LEN];
int dx[] = { 1,-1, };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(dis, dis + LEN, -1);
	queue<int> Q;

	int n, k;
	cin >> n >> k;
	dis[n] = 0;
	Q.push(n);

	while (!Q.empty())
	{
		int cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 3; dir++)
		{
			int nx;
			if (dir == 2) nx = cur * 2;
			else nx = cur + dx[dir];
			if (nx < 0 || nx >= LEN) continue;
			if (dis[nx] >= 0) continue;
			dis[nx] = dis[cur] + 1;
			from[nx] = cur;
			Q.push({ nx });
		}
	}
	cout << dis[k] << "\n";

	stack<int> ans;
	for (int i = k; i != n; i = from[i])
	{
		ans.push(i);
	}
	ans.push(n);
	while (!ans.empty()) 
	{
		cout << ans.top() << " ";
		ans.pop();
	}

	return 0;
}