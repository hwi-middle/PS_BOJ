#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> res;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int temp[11];
		bool perf = true;
		for (int j = 1; j <= 10; j++)
		{
			cin >> temp[j];
		}
		cout << "\n";
		for (int j = 1; j <= 10; j++)
		{
			if (temp[j] != (j - 1) % 5 + 1)
			{	
				perf = false;
				break;
			}
		}
		if (perf)
		{
			res.push_back(i);
		}
	}

	for (auto s : res)
	{
		cout << s << "\n";
	}

	return 0;
}