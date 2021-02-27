#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v; //end, start ¼ø
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ b,a });
	}
	sort(v.begin(), v.end());

	int start = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i].second >= start)
		{
			cout << v[i].first << " " << v[i].second << "\n";
			start = v[i].first;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}
