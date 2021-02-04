#include <bits/stdc++.h>
using namespace std;

vector<int> a[100000]; //��ü �׷���
int order[100000]; //�Է����� ���� BFS ����
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
	int m = 1;	//ť�� ũ��
	for (int i = 0; i < n; i++)
	{
		if (q.empty()) //BFS�� �������ε� ť�� ��
		{
			cout << "0";
			return 0;
		}
		int x = q.front();
		q.pop();
		if (x != order[i]) //������ �ùٸ��� ����
		{
			cout << "0";
			return 0;
		}

		int cnt = 0; //ť�� �־���� ������ ��
		for (int y : a[x])
		{
			if (check[y] == false)
			{
				parent[y] = x; //�湮���� ���� �����̶�� x�� ����Ǿ������ ���
				cnt++;
			}
		}

		for (int j = 0; j < cnt; j++)
		{
			if (m + j >= n || parent[order[m + j]] != x) //x�� ������� ���� ������ ť�� �������� �ùٸ��� ����
			{
				cout << "0";
				return 0;
			}
			q.push(order[m + j]); //�ùٸ� ��� ť�� push
			check[order[m + j]] = true;
		}
		m += cnt;
	}

	cout << "1";

	return 0;
}