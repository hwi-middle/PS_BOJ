#include <bits/stdc++.h>
using namespace std;

int main()
{
	int cur = 0;
	int res = 0;
	for (int i = 0; i < 4; i++)
	{
		int out, in;
		cin >> out >> in;
		cur -= out;
		cur += in;
		res = max(res, cur);
	}

	cout << res;

	return 0;
}