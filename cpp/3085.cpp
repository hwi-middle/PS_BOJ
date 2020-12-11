#include <bits/stdc++.h>
using namespace std;

int check(vector<string>& v, int x, int y)
{
	int n = v.size();
	int res = 1;

	int temp = 1;
	for (int i = 1; i < n; i++)
	{
		if (v[x][i] == v[x][i - 1]) temp++;
		else temp = 1;
		res = max(res, temp);
	}
	if (x + 1 < n)
	{
		temp = 1;
		for (int i = 1; i < n; i++)
		{
			if (v[x + 1][i] == v[x + 1][i - 1]) temp++;
			else temp = 1;
			res = max(res, temp);
		}
	}

	temp = 1;
	for (int i = 1; i < n; i++)
	{
		if (v[i][y] == v[i - 1][y]) temp++;
		else temp = 1;
		res = max(res, temp);
	}
	if (y + 1 < n)
	{
		temp = 1;
		for (int i = 1; i < n; i++)
		{
			if (v[i][y + 1] == v[i - 1][y + 1]) temp++;
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
				int temp = check(v, i, j);
				res = max(res, temp);
				swap(v[i][j], v[i + 1][j]);
			}
			if (j + 1 < n)
			{
				swap(v[i][j], v[i][j + 1]);
				int temp = check(v, i, j);
				res = max(res, temp);
				swap(v[i][j], v[i][j + 1]);
			}

		}
	}

	cout << res;

	return 0;
}