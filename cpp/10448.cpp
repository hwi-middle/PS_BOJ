#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	int idx = 2;
	int cur = 1;

	while(cur <= 1000)
	{
		v.push_back(cur);
		cur = idx * (idx + 1) / 2;
		idx++;
	}

	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		bool valid = false;
		int target;
		cin >> target;
		for (int j = 0; j < v.size(); j++)
		{
			for (int k = 0; k < v.size(); k++)
			{
				for (int l = 0; l < v.size(); l++)
				{
					if (v[j] + v[k] + v[l] == target)
					{
						valid = true;
					}
				}
			}
		}

		cout << (valid ? '1' : '0') << "\n";
	}

	return 0;
}