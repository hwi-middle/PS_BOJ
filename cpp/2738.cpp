#include <bits/stdc++.h>
using namespace std;

int mat[100][100];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;
	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int temp;
			cin >> temp;
			mat[i][j] += temp;
			cout << mat[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}