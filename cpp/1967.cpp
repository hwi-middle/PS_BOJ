#include <bits/stdc++.h>

using namespace std;

struct Edge {
	int to;
	int cost;
	Edge(int to, int cost) : to(to), cost(cost) {}
};
vector<Edge> a[10001];
bool check[10001];
int dist[10001];
void bfs(int start)
{
	memset(dist, 0, sizeof(dist));
	memset(check, false, sizeof(check));
	queue<int> q;
	check[start] = true;
	q.push(start);
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 0; i < a[x].size(); i++)
		{
			Edge& e = a[x][i];
			if (check[e.to] == false)
			{
				dist[e.to] = dist[x] + e.cost;
				q.push(e.to);
				check[e.to] = true;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		a[u].push_back(Edge(v, w));
		a[v].push_back(Edge(u, w));
	}

	bfs(1);
	int start = 1;
	for (int i = 2; i <= n; i++)
	{
		if (dist[i] > dist[start])
		{
			start = i;
		}
	}
	
	//가장 먼 정점에서 다시 BFS
	bfs(start);
	int ans = dist[1];
	for (int i = 2; i <= n; i++)
	{
		if (ans < dist[i])
		{
			ans = dist[i];
		}
	}

	cout << ans;

	return 0;
}