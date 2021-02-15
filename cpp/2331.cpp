#include <bits/stdc++.h>

using namespace std;

int sol(int l, int exp)
{
	string str = to_string(l);
	int res = 0;
	for (int i = 0; i < str.length(); i++)
	{
		res += pow(str[i] - '0', exp);
	}

	return res;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	int ans = 1;
	int a, b;
	cin >> a >> b;

	int cur = a;
	v.push_back(cur);
	while (true)
	{
		cur = sol(cur, b);

		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == cur)
			{
				ans = i;
				goto exit;
			}
		}
		v.push_back(cur);
	}
exit:
	cout << ans;

	return 0;
}