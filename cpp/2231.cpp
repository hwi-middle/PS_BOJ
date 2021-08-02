#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int res = 0;

	for (int i = 1; i < n; i++)
	{
		int temp = i;
		int t = 0;
		while (temp != 0)
		{
			t += temp % 10;
			cout << temp % 10 << "\n";
			temp /= 10;
		}

		if (t + i == n)
		{
			res = i;
			break;
		}
	}

	cout << res;

	return 0;
}