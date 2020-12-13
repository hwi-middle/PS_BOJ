#include <bits/stdc++.h>
using namespace std;

int num[10];
int a[10];

void sol(int idx, int start, int n, int m)
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
	for (int i = start; i < n; i++)
	{
		a[idx] = i;
		sol(idx + 1, i, n, m);
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

	return 0;
}