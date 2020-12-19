#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;

		cout << "Distances: ";
		for (int j = 0; j < a.length(); j++)
		{
			int res = b[j] - a[j];
			if (res < 0) res += 24;
			cout << res << " ";
		}
		cout << "\n";
	}

	return 0;
}