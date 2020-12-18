#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	cout << factorial(n) / (factorial(n - k) * factorial(k));

	return 0;
}