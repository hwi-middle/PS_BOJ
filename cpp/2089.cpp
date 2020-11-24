#include <bits/stdc++.h>
using namespace std;

void sol(int n)
{
	if (n == 0)
	{
		return;
	}
	if (n % 2 == 0)
	{
		sol(-(n / 2));
		cout << "0";
	}
	else
	{
		if (n > 0)
		{
			sol(-(n / 2));
		}
		else
		{
			sol((-n + 1) / 2);
		}
		cout << "1";
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	if (n == 0)
	{
		cout << "0";
	}
	else
	{
		sol(n);
	}

	return 0;
}