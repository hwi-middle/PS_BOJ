#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t1[9];
	int t2[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> t1[i];
	}
	for (int i = 0; i < 9; i++)
	{
		cin >> t2[i];
	}

	int sum1 = 0;
	int sum2 = 0;
	bool check = false;
	for (int i = 0; i < 9; i++)
	{
		sum1 += t1[i];
		if (sum1 > sum2)
			check = true;
		sum2 += t2[i];
		if (sum1 > sum2)
			check = true;
	}

	if (check)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}