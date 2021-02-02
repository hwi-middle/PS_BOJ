#include <bits/stdc++.h>
using namespace std;

vector<int> board[3000];
int check[3000];	//0:�湮���� ����
					//1: �湮��
					//2: ����Ŭ�� �Ϻ�
int dis[3000];


//-2: ����Ŭ�� ã������ ���Ե��� ����
//-1: ����Ŭ�� ã�� ����
//0~n-1: ����Ŭ�� ���� �ε���
int sol(int cur, int prev)
{
	if (check[cur] == 1) //��湮�� ����Ŭ�� �ǹ���
	{
		return cur; //����Ŭ�� ���� �ε��� ��ȯ
	}
	check[cur] = 1;
	for (int nxt : board[cur])
	{
		if (nxt == prev) continue; //���� �����̸� �ٽ� ���� ����
		int res = sol(nxt, cur);
		if (res == -2) return -2; //����Ŭ�� ã�Ҵµ� ���Ե��� �ʴ� ���
		if (res >= 0)
		{
			check[cur] = 2;
			if (cur == res) return -2; //����Ŭ�� �������̶�� �������ʹ� ����Ŭ �ƴ�
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