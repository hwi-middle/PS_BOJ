#include <bits/stdc++.h>
using namespace std;

bool check[31];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	
	for (int i = 0; i < 28; i++)
	{
		int k;
		cin >> k;
		check[k] = true;
	}
	for (int i = 1; i <= 30; i++)
	{
		if (!check[i]) cout << i << "\n";
	}

	return 0;
}