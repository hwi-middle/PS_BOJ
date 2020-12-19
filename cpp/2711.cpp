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
		int k;
		cin >> k;

		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			if (j != k - 1) cout << str[j];
		}
		cout << "\n";
	}

	return 0;
}