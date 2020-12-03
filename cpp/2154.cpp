#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string input;
	cin >> input;

	string str;
	for (int i = 1; i <= 100000; i++)
	{
		str.append(to_string(i));
	}

	for (int i = 0; i < str.length(); i++)
	{
		if (str.substr(i, input.length()) == input)
		{
			cout << i + 1;
			break;
		}
	}

	return 0;
}