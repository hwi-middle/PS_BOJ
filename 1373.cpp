#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string bin;
	cin >> bin;
	if (bin.length() % 3 != 0)
	{
		int n = pow(2, bin.length() % 3 - 1);
		int temp = 0;
		for (int i = 0; i < bin.length() % 3; i++)
		{
			temp += n * (bin[i] - '0');
			n /= 2;
		}
		cout << temp;
	}

	for (int i = bin.length() % 3; i < bin.length(); i += 3)
	{
		int n = 4;
		int temp = 0;
		for (int j = 0; j < 3; j++)
		{
			temp += n * (bin[i + j] - '0');
			n /= 2;
		}
		cout << temp;
	}

	cout << oct;

	return 0;
}