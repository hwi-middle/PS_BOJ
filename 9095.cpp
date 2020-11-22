#include <bits/stdc++.h>
using namespace std;

int d[11];

int sol(int n)
{
	if (n == 0) return 1; //���� 0�� ����ϴ� �͵� 1������ ���
	if (d[n] > 0) return d[n];

	if (n - 1 >= 0) d[n] += sol(n - 1);
	if (n - 2 >= 0) d[n] += sol(n - 2);
	if (n - 3 >= 0) d[n] += sol(n - 3);
	return d[n];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		cout << sol(n) << "\n";
	}

	return 0;
}