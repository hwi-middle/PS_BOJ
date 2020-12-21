#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int s = 0;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		string cmd;
		cin >> cmd;

		int n;
		if (cmd == "add")
		{
			cin >> n;
			n--;
			s = s | (1 << n);
		}
		else if (cmd == "remove")
		{
			cin >> n;
			n--;
			s = (s & ~(1 << n));
		}
		else if (cmd == "check")
		{
			cin >> n;
			n--;
			int res = s & (1 << n);
			if (res)
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (cmd == "toggle")
		{
			cin >> n;
			n--;
			s = (s ^ (1 << n));
		}
		else if (cmd == "all")
		{
			s = (1 << 20) - 1;
		}
		else if (cmd == "empty")
		{
			s = 0;
		}
	}

	return 0;
}