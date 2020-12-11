#include <bits/stdc++.h>
using namespace std;

int check(vector<string>& v)
{
	int n = v.size();
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		int temp = 1;
		for (int j = 1; j < n; j++)
		{
			if (v[i][j] == v[i][j - 1]) temp++;
			else temp = 1;
			res = max(res, temp);
		}

		temp = 1;
		for (int j = 1; j < n; j++)
		{
			if (v[j][i] == v[j - 1][i]) temp++;
			else temp = 1;
			res = max(res, temp);
		}
	}
	return res;
}

int main()
{
	int n;
	cin >> n;

	vector<string> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + 1 < n)
			{
				swap(v[i][j], v[i + 1][j]);
				int temp = check(v);
				res = max(res, temp);
				swap(v[i][j], v[i + 1][j]);
			}
			if (j + 1 < n)
			{
				swap(v[i][j], v[i][j + 1]);
				int temp = check(v);
				res = max(res, temp);
				swap(v[i][j], v[i][j + 1]);
			}

		}
	}

	cout << res;

	return 0;
}