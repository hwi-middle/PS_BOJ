#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	set<int> s;
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
			s.insert(n);
		}
		else if (cmd == "remove")
		{
			cin >> n;
			s.erase(n);
		}
		else if (cmd == "check")
		{
			cin >> n;
			if (s.count(n))
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (cmd == "toggle")
		{
			cin >> n;
			if (s.count(n)) s.erase(n);
			else s.insert(n);
		}
		else if (cmd == "all")
		{
			for (int i = 1; i <= 20; i++)
			{
				s.insert(i);
			}
		}
		else if (cmd == "empty")
		{
			s.clear();
		}
	}

	return 0;
}