#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	cin >> m >> n;

	int sum = 0;
	int min = 10000 * 10000 + 1;
	for (int i = 1; i * i <= n; i++)
	{
		int temp = i * i;
		if (temp >= m)
		{
			sum += temp;
			if (temp < min)
				min = temp;
		}
	}
	if (sum != 0)
		cout << sum << "\n" << min;
	else
		cout << -1;
	return 0;
}