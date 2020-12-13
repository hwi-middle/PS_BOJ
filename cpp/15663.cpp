#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int num[10];
int a[10];
bool u[10]; //사용한 수면 true 아니면 false

void sol(int idx, int start, int n, int m)
{
	if (idx == m)
	{
		vector<int> temp;
		for (int i = 0; i < m; i++)
		{
			temp.push_back(num[a[i]]);
		}
		v.push_back(temp);
		return;
	}
	for (int i = start; i < n; i++)
	{
		if (u[i]) continue;
		u[i] = true;
		a[idx] = i;
		sol(idx + 1, i + 1, n, m);
		u[i] = false;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	sort(num, num + n);
	sol(0, 0, n, m);

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (auto e : v)
	{
		for (int i = 0; i < m; i++)
		{
			cout << e[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}