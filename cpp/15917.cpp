#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int q;
	cin >> q;

	for (int i = 0; i < q; i++)
	{
		int a;
		cin >> a;
		if ((a & (-a)) == a)
		{
			cout << "1\n";
		}
		else
		{
			cout << "0\n";
		}
	}

	return 0;
}