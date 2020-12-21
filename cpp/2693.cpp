#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		vector<int> v(10);
		for (int j = 0; j < 10; j++)
		{
			cin >> v[j];
		}
		sort(v.begin(), v.end());
		cout << v[7] << "\n";
	}

	return 0;
}