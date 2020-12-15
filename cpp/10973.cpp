#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		v.push_back(k);
	}

	if (next_permutation(v.begin(), v.end()))
	{
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
	}
	else
	{
		cout << -1;
	}

	return 0;
}