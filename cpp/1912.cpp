#include <bits/stdc++.h>

using namespace std;

int a[100000];
int d[100000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	d[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		d[i] = a[i];
		if (d[i] < d[i - 1] + a[i])
		{
			d[i] = d[i - 1] + a[i];
		}
	}

	int max = d[0];
	for (int i = 1; i < n; i++)
	{
		if (d[i] > max)
		{
			max = d[i];
		}
	}

	cout << max << "\n";

	return 0;
}