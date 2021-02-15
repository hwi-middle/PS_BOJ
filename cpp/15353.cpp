#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a >> b;

	vector<char> res;
	bool carry = false;
	int a_len = a.length();
	int b_len = b.length();

	if (a.length() != b.length())
	{
		string temp = "";
		for (int i = 0; i < abs((int)a.length() - (int)b.length()); i++)
		{
			temp.push_back('0');
		}

		if (a.length() > b.length())
		{
			b.insert(0, temp);
		}
		else
		{
			a.insert(0, temp);
		}
	}

	for (int i = a.length() - 1; i >=0; i--)
	{
		int digit = a[i] - '0' + b[i] - '0';
		if (carry)
		{
			digit++;
			carry = false;
		}

		if (digit >= 10)
		{
			digit -= 10;
			carry = true;
		}
		res.push_back((char)digit + '0');
	}
	if (carry) res.push_back('1');

	for (int i = res.size() - 1; i >= 0; i--)
	{
		cout << res[i];
	}

	return 0;
}