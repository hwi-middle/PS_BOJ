#include <bits/stdc++.h>
using namespace std;

int num[10];
int a[10];
bool u[10]; //사용한 수면 true 아니면 false

void sol(int idx, int n, int m)
{
	if (idx == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << num[a[i]] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (u[i]) continue;
		u[i] = true;
		a[idx] = i;
		sol(idx + 1, n, m);
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
	sol(0, n, m);

	return 0;
}