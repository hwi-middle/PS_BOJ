#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, v;
	cin >> a >> b >> v;

	int ans = (v - a) / (a - b) + 1;
	if ((v - a) % (a - b) != 0)
		ans++;

	cout << ans;

	return 0;
}