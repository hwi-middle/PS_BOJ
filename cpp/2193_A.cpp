#include <bits/stdc++.h>
using namespace std;

long long d[91][3];

int main()
{
	d[1][0] = 0;
	d[1][1] = 1;
	d[2][0] = 1;
	d[2][1] = 0;

	int n;
	cin >> n;
	for (int i = 3; i <= n; i++)
	{
		d[i][0] = d[i - 1][0] + d[i - 1][1];
		d[i][1] = d[i - 1][0];
	}
	cout << d[n][0] + d[n][1];

	return 0;
}