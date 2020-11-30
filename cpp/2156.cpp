#include <bits/stdc++.h>

using namespace std;

int a[10001];
int d[10001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	d[1] = a[1];
	d[2] = a[1] + a[2];

	for (int i = 3; i <= n; i++)
	{
		d[i] = max({ d[i - 1],
			d[i - 2] + a[i],
			d[i - 3] + a[i - 1] + a[i]
			});
	}

	cout << d[n];

	return 0;
}