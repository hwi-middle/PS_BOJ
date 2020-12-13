#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	long long ans = 0;
	int len = 1;
	for (int i = 1; i <= n; i *= 10)
	{
		int end = i * 10 - 1;
		if (end > n) end = n;

		ans += ((long long)end - i + 1) * len;
		len++;
	}

	cout << ans;

	return 0;
}