#include <bits/stdc++.h>
using namespace std;

vector<int> board[3000];
int check[3000];	//0:방문하지 않음
					//1: 방문함
					//2: 사이클의 일부
int dis[3000];


//-2: 사이클을 찾았으나 포함되지 않음
//-1: 사이클을 찾지 못함
//0~n-1: 사이클의 시작 인덱스
int sol(int cur, int prev)
{
	if (check[cur] == 1) //재방문은 사이클을 의미함
	{
		return cur; //사이클의 시작 인덱스 반환
	}
	check[cur] = 1;
	for (int nxt : board[cur])
	{
		if (nxt == prev) continue; //이전 정점이면 다시 가지 않음
		int res = sol(nxt, cur);
		if (res == -2) return -2; //사이클을 찾았는데 포함되지 않는 경우
		if (res >= 0)
		{
			check[cur] = 2;
			if (cur == res) return -2; //사이클의 시작점이라면 이제부터는 사이클 아님
			else return res;
		}
	}
	return -1;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		board[u].push_back(v);
		board[v].push_back(u);
	}

	sol(0, -1);
	queue<int> q;

	for (int i = 0; i < n; i++)
	{
		if (check[i] == 2)
		{
			dis[i] = 0;
			q.push(i);
		}
		else
		{
			dis[i] = -1;
		}
	}

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int y : board[x])
		{
			if (dis[y] == -1)
			{
				q.push(y);
				dis[y] = dis[x] + 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << dis[i] << " ";
	}

	return 0;
}