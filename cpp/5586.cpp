#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int joi = 0, ioi = 0;
	for (int i = 0; i < str.length() - 2; i++)
	{
		if (str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I')
			joi++;
		else if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I')
			ioi++;
	}

	cout << joi << "\n" << ioi;

	return 0;
}