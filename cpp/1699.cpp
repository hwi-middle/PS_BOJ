#include <bits/stdc++.h>

using namespace std;

int d[100001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		d[i] = i;
		for (int j = 1; j * j <= i; j++)
		{
			if (d[i] > d[i - j * j] + 1)
			{
				d[i] = d[i - j * j] + 1;
			}
		}
	}

	cout << d[n];

	return 0;
}