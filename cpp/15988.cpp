#include <bits/stdc++.h>
using namespace std;

int d[1001];

int sol(int x)
{
	if (x == 1) return 1;
	if (d[x] > 0) return d[x];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cout << n;

	return 0;
}