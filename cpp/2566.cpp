#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int temp;
	int max = -1;
	int r, c;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cin >> temp;
			if (temp > max)
			{
				max = temp;
				r = i;
				c = j;
			}
		}
	}

	cout << max << "\n" << r << " " << c;

	return 0;
}