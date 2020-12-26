#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int i = n;
	if (i == 1)
	{
		cout << 2;
		return 0;
	}

	while (true)
	{
		bool is_prime = true;

		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				is_prime = false;
				break;
			}
		}

		bool is_palindrome = true;
		string str = to_string(i);
		for (int j = 0; j < str.length() / 2; j++)
		{
			if (str[j] != str[str.length() - 1 - j])
			{
				is_palindrome = false;
				break;
			}
		}

		if (is_prime && is_palindrome)
		{
			cout << i;
			return 0;
		}

		i++;
	}

	return 0;
}