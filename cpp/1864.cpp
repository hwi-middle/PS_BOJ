#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	while (str != "#")
	{
		int res = 0;
		for (int i = str.length() - 1, exp = 0; i >= 0; i--, exp++)
		{
			int digit = 0;
			switch (str[i])
			{
			case '-':
				digit = 0;
				break;
			case '\\':
				digit = 1;
				break;
			case '(':
				digit = 2;
				break;
			case '@':
				digit = 3;
				break;
			case '?':
				digit = 4;
				break;
			case '>':
				digit = 5;
				break;
			case '&':
				digit = 6;
				break;
			case '%':
				digit = 7;
				break;
			case'/':
				digit = -1;
				break;
			}

			int temp = 1;
			for (int j = 0; j < exp; j++)
			{
				temp *= 8;
			}
			res += temp * digit;
		}
		cout << res << "\n";

		cin >> str;
	}

	return 0;
}