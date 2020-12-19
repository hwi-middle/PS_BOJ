#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < 3; j++)
		{
			str[i]--;
			if (str[i] < 'A') str[i] = 'Z';
		}
	}
	cout << str;

	return 0;
}