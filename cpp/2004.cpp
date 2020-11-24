//기본원리는 1676번과 유사하나 2가 더 많다는 보장이 없으므로 2와 5의 수를 셈.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, m;
	cin >> n >> m;

	long long two = 0;
	long long five = 0;

	for (long long i = 2; i <= n; i *= 2)
		two += n / i;
	for (long long i = 5; i <= n; i *= 5)
		five += n / i;

	for (long long i = 2; i <= n - m; i *= 2)
		two -= (n - m) / i;
	for (long long i = 5; i <= n - m; i *= 5)
		five -= (n - m) / i;

	for (long long i = 2; i <= m; i *= 2)
		two -= m / i;
	for (long long i = 5; i <= m; i *= 5)
		five -= m / i;

	cout << min(two, five);

	return 0;
}