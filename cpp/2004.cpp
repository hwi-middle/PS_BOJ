//�⺻������ 1676���� �����ϳ� 2�� �� ���ٴ� ������ �����Ƿ� 2�� 5�� ���� ��.

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