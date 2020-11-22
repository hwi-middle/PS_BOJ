#include <bits/stdc++.h>
using namespace std;

int memo[41];

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else if (memo[n] > 0) return memo[n];

	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x == 0) cout << "1 0\n";
		else cout << fibonacci(x - 1) << " " << fibonacci(x) << "\n";
	}

	return 0;
}