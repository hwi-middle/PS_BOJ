#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	vector<int> v(a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin >> v[j];
		}

		for (int j = 0; j < b; j++)
		{
			for (int k = 0; k < a; k++)
			{
				for (int l = 0; l < b; l++)
				{
					cout << v[k] << " ";
				}
			}
			cout << "\n";
		}
	}

	return 0;
}