#include <bits/stdc++.h>
using namespace std;

vector<int> a[100000]; //전체 그래프
int order[100000]; //입력으로 들어온 BFS 순서
int parent[100000];
bool check[100000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		a[u].push_back(v);
		a[v].push_back(u);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> order[i];
		order[i]--;
	}

	queue<int> q;
	q.push(0);
	check[0] = true;
	int m = 1;	//큐의 크기
	for (int i = 0; i < n; i++)
	{
		if (q.empty()) //BFS가 진행중인데 큐가 빔
		{
			cout << "0";
			return 0;
		}
		int x = q.front();
		q.pop();
		if (x != order[i]) //순서가 올바르지 않음
		{
			cout << "0";
			return 0;
		}

		int cnt = 0; //큐에 넣어야할 정점의 수
		for (int y : a[x])
		{
			if (check[y] == false)
			{
				parent[y] = x; //방문하지 않은 정점이라면 x와 연결되어야함을 명시
				cnt++;
			}
		}

		for (int j = 0; j < cnt; j++)
		{
			if (m + j >= n || parent[order[m + j]] != x) //x와 연결되지 않은 정점이 큐에 들어가있으니 올바르지 않음
			{
				cout << "0";
				return 0;
			}
			q.push(order[m + j]); //올바른 경우 큐에 push
			check[order[m + j]] = true;
		}
		m += cnt;
	}

	cout << "1";

	return 0;
}