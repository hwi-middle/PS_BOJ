#include <bits/stdc++.h>
using namespace std;

bool u[10]; //사용한 수면 true 아니면 false
int a[10];

void sol(int idx, int start, int n, int m)
{
	if (idx == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = start; i <= n; i++)
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
	int n, m;
	cin >> n >> m;
	sol(0, 1, n, m);

	return 0;
}