#include <bits/stdc++.h>
using namespace std;

#define LEN 100005
int dis[LEN];
int dx[] = { 0,-1,1 };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(dis, dis + LEN, -1);
	deque<int> q;

	int n, k;
	cin >> n >> k;
	dis[n] = 0;
	q.push_back(n);

	while (!q.empty())
	{
		int cur = q.front();
		q.pop_front();

		for (int dir = 0; dir < 3; dir++)
		{
			int nx;
			if (dir == 0) nx = cur * 2;
			else nx = cur + dx[dir];

			if (nx < 0 || nx >= LEN) continue;
			if (dis[nx] >= 0) continue;

			if (dir == 0)
			{
				dis[nx] = dis[cur];
				q.push_front(nx);
			}
			else
			{
				dis[nx] = dis[cur] + 1;
				q.push_back(nx);
			}
		}
	}

	cout << dis[k];

	return 0;
}