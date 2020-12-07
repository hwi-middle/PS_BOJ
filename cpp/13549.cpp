#include <bits/stdc++.h>
using namespace std;

#define LEN 100005
#define INF 987654321 
int dis[LEN];
int dx[2] = { 1,-1 };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(dis, dis + LEN, INF);
	queue<int> Q;

	int n, k;
	cin >> n >> k;
	dis[n] = 0;
	Q.push(n);

	while (!Q.empty())
	{
		int cur = Q.front();
		Q.pop();
		if (cur == k)
		{
			cout << dis[k];
			return 0;
		}

		for (int dir = 0; dir < 3; dir++)
		{
			int nx;
			if (dir == 2) nx = cur * 2;
			else nx = cur + dx[dir];

			if (nx < 0 || nx >= LEN) continue;

			if (dir == 2)
			{
				if (dis[nx] < dis[cur]) continue;
				dis[nx] = dis[cur];
			}
			else
			{
				if (dis[nx] < dis[cur] + 1) continue;
				dis[nx] = dis[cur] + 1;
			}
			Q.push(nx);
		}
	}

	return 0;
}
​