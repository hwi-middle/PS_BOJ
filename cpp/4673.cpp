#include <bits/stdc++.h>
using namespace std;

int d[10001];

int sol(int n)
{
	string str = to_string(n);
	int res = 0;
	res += stoi(str);
	for (int i = 0; i < str.size(); i++)
	{
		res += str[i] - '0';
	}
	return res;
}

int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		d[sol(i)] = 1;
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (d[i] != 1)
			cout << i << "\n";
	}
	return 0;
}