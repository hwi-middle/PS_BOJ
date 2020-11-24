//Top-Down ¹æ½Ä
#define MX 1000001
#include <bits/stdc++.h>
using namespace std;

int memo[MX];

int sol(int n)
{
	if (n == 1) return 0;
	if (memo[n] > 0) return memo[n];

	memo[n] = sol(n - 1) + 1;
	if (n % 2 == 0)
	{
		int temp = sol(n / 2) + 1;
		memo[n] = min(memo[n], temp);
	}
	if (n % 3 == 0)
	{
		int temp = sol(n / 3) + 1;
		memo[n] = min(memo[n], temp);
	}
	return memo[n];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cout << sol(n);

	return 0;
}